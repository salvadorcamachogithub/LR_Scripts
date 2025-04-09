Action()
{

/*

Updated: 04.2025  
Script created by Salvador Camacho

This script requires "Reflection TE Flight Demo" to be running, double-click on it, located under:  
C:\ADM Solutions

This script was created with best practices, so it is more resilient, such as:
* Transaction naming
* No third party
* One validation per transaction
* Think times at the end of each transaction to better simulate user behavior
* Credentials parametrized

This script uses Terminal Emulation to log in to a Flight application, find a reservation, view reservation and exit the system

Runtime Settings were set to log only on errors and generate snapshot on errors, think times 75% to 150%

This script has 9 transactions:  
TE Flight-RTE-S01-01 Connect  
TE Flight-RTE-S01-02 Log On  
TE Flight-RTE-S01-03 Enter System  
TE Flight-RTE-S01-04 Select View An Existing Reservation  
TE Flight-RTE-S01-05 F4 To Find A Reservation  
TE Flight-RTE-S01-06 Scroll To Reservation  
TE Flight-RTE-S01-07 View Reservation  
TE Flight-RTE-S01-08 Exit System  
TE Flight-RTE-S01-09 Signoff

*/

lr_start_transaction("TE Flight-RTE-S01-01 Connect");

	/* MAKE SURE TO START THE TE MERCURY FLIGHT DEMO SERVER FIRST */
	/* also called Reflection TE Flight Demo */
	/* *** The terminal type is 3270 Display. */
	TE_connect(
		"comm-type = tn3270;"
		"host-name = localhost;"
		"use-tn3270e-protocol = true;"
		"security-type = unsecured;"
		"r2l-screen = false;"
		"lu-name = ;"
		"terminal-type = 3270 display;"
		"terminal-model = 3278-2-e (24x80);"
		"login-command-file = ;"
		"terminal-setup-file = ;"
		, 60000);
	if (TE_errno != TE_SUCCESS) 
		return -1;
	TE_wait_sync();
	TE_wait_cursor(16, 20, 100, 90);
	
lr_end_transaction("TE Flight-RTE-S01-01 Connect", LR_AUTO);
	
	lr_think_time(10);
	
	
lr_start_transaction("TE Flight-RTE-S01-02 Log On");

	TE_type("{USERID}<kTab>");
	TE_type("{PASSWORD}<kEnter>");
	TE_wait_sync();
	
lr_end_transaction("TE Flight-RTE-S01-02 Log On", LR_AUTO);

	lr_think_time(10);
	
	
lr_start_transaction("TE Flight-RTE-S01-03 Enter System");

	TE_type("cicsv<kEnter>");
	TE_wait_sync();
	
lr_end_transaction("TE Flight-RTE-S01-03 Enter System", LR_AUTO);

	lr_think_time(10);
	

lr_start_transaction("TE Flight-RTE-S01-04 Select View An Existing Reservation");
	
	TE_type("4<kEnter>");
	TE_wait_sync();
	
lr_end_transaction("TE Flight-RTE-S01-04 Select View An Existing Reservation", LR_AUTO);

	lr_think_time(10);
	
	
lr_start_transaction("TE Flight-RTE-S01-05 F4 To Find A " 
	                     "Reservation");

	TE_type("<kF4>");
	TE_wait_sync();
	
lr_end_transaction("TE Flight-RTE-S01-05 F4 To Find A Reservation", LR_AUTO);

	lr_think_time(10);
	
	
lr_start_transaction("TE Flight-RTE-S01-06 Scroll To Reservation");

	TE_type("<kF7>");
	TE_wait_sync();
	TE_type("<kDown>");
	TE_type("<kDown>");
	TE_type("<kDown>");
	
lr_end_transaction("TE Flight-RTE-S01-06 Scroll To Reservation", LR_AUTO);

	lr_think_time(10);
	
	
lr_start_transaction("TE Flight-RTE-S01-07 View Reservation");

	TE_type("x<kEnter>");
	TE_wait_sync();
	
lr_end_transaction("TE Flight-RTE-S01-07 View Reservation", LR_AUTO);

	lr_think_time(10);
	

lr_start_transaction("TE Flight-RTE-S01-08 Exit System");

	TE_type("<kF3>");
	TE_wait_sync();
	
lr_end_transaction("TE Flight-RTE-S01-08 Exit System", LR_AUTO);

	lr_think_time(10);
	
	
lr_start_transaction("TE Flight-RTE-S01-09 Signoff");

	TE_type("99");
	TE_type("<kEnter>");
	
lr_end_transaction("TE Flight-RTE-S01-09 Signoff", LR_AUTO);

	lr_think_time(10);
	
	/* 	End recording */
	
	return 0;
}
