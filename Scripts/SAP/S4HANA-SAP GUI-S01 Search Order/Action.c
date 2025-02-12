Action()
{
	// Go to Runtime Settings > SAPGUI > General > Performance to disable SAP Client during replay

// Starting Think Time

lr_think_time(10);

lr_start_transaction("S4HANA-SAP GUI-S01-01 Log In");

	sapgui_open_connection_ex(connection_string1, 
		"S/4HANA 2020 FPS01", 
		"con[0]");

	sapgui_select_active_connection("con[0]");

	sapgui_select_active_session("ses[0]");

	sapgui_select_active_window("wnd[0]");

	sapgui_window_resize("171", 
		"34", 
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

lr_end_transaction("S4HANA-SAP GUI-S01-03 Search Order",LR_AUTO);

	lr_think_time(10);


lr_start_transaction("S4HANA-SAP GUI-S01-04 Log Off");

	sapgui_press_button("Exit", 
		btn1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1022", 
		END_OPTIONAL);

	sapgui_press_button("Exit", 
		btn1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1025", 
		END_OPTIONAL);

	sapgui_select_active_window("wnd[1]");

	sapgui_press_button("Yes", 
		btnSPOP1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1028", 
		END_OPTIONAL);

lr_end_transaction("S4HANA-SAP GUI-S01-04 Log Off",LR_AUTO);

	return 0;
}