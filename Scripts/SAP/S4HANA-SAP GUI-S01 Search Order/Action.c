Action()
{

/*

Updated: 04.2025  
Script created by Salvador Camacho

This SAP script requires SoftEther VPN Client Manager to connect to DEMONET

Go to Runtime Settings > SAPGUI > General > Performance  if you want to disable SAP Client during replay

This script was created with best practices, so it is more resilient, such as:
* Transaction naming
* No third party
* One validation per transaction
* Think times at the end of each transaction to better simulate user behavior
* SAP credentials parametrized

This SAP script logs in, enters Tcode /nva03 to search for an order, searches an order, goes to it, then logs off

Runtime Settings were set to log only on errors and generate snapshot on errors, think times 75% to 150%

This script has 4 transactions:  
S4HANA-SAP GUI-S01-01 Log In  
S4HANA-SAP GUI-S01-02 Enter Tcode  
S4HANA-SAP GUI-S01-03 Search Order  
S4HANA-SAP GUI-S01-04 Log Off

*/
 
// Starting Think Time
lr_think_time(10);

lr_start_transaction("S4HANA-SAP GUI-S01-01 Log In");

	sapgui_open_connection_ex(connection_string1, 
		"S4H (S/4 Hana 2023)", 
		"con[0]");

	sapgui_select_active_connection("con[0]");

	sapgui_select_active_session("ses[0]");

	sapgui_select_active_window("wnd[0]");

	sapgui_window_resize("108", 
		"15", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui104", 
		END_OPTIONAL);

	/*Before running script, enter password in place of asterisks in logon function*/

	sapgui_logon("{SAP_Username}", 
		"{SAP_Password}", 
		"100", 
		"EN", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1012", 
		END_OPTIONAL);
	
lr_end_transaction("S4HANA-SAP GUI-S01-01 Log In",LR_AUTO);

	lr_think_time(10);
	

lr_start_transaction("S4HANA-SAP GUI-S01-02 Enter Tcode");

	sapgui_set_ok_code("/nva03", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1013", 
		END_OPTIONAL);

	sapgui_send_vkey(ENTER, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1014", 
		END_OPTIONAL);

lr_end_transaction("S4HANA-SAP GUI-S01-02 Enter Tcode",LR_AUTO);

	lr_think_time(10);
	
	
lr_start_transaction("S4HANA-SAP GUI-S01-03 Search Order");

	sapgui_set_text("VBAK-VBELN", 
		"{orderNumber}", 
		ctxtVBAK1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1017", 
		END_OPTIONAL);

	sapgui_press_button(" Search", 
		btnBT_SUCH1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1019", 
		END_OPTIONAL);
		
	sapgui_status_bar_get_text("paramStatusBarText", 
		BEGIN_OPTIONAL, 
			"Recorded status bar text: Consider the subsequent documents", 
			"AdditionalInfo=sapgui1022", 
		END_OPTIONAL);
		
lr_end_transaction("S4HANA-SAP GUI-S01-03 Search Order",LR_AUTO);

	lr_think_time(10);
	

lr_start_transaction("S4HANA-SAP GUI-S01-04 Log Off");

	sapgui_press_button("Exit", 
		btn1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1023", 
		END_OPTIONAL);

	sapgui_press_button("Exit", 
		btn1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1026", 
		END_OPTIONAL);

	sapgui_select_active_window("wnd[1]");

	sapgui_press_button("Yes", 
		btnSPOP1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1029", 
		END_OPTIONAL);

lr_end_transaction("S4HANA-SAP GUI-S01-04 Log Off",LR_AUTO);

	return 0;
}