//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("AOS-TruClient-S03-01 Access AOS URL");
	truclient_step("1", "Navigate to AOS_URL", "snapshot=Action_1.inf");
	lr_end_transaction("AOS-TruClient-S03-01 Access AOS URL",0);
	truclient_step("2", "Wait Math.floor(Math.random() * (26- 15) + 15) seconds", "snapshot=Action_2.inf");
	lr_start_transaction("AOS-TruClient-S03-02 Sign In");
	truclient_step("3", "Click on button (1) button", "snapshot=Action_3.inf");
	truclient_step("4", "Type loginUser in username textbox", "snapshot=Action_4.inf");
	truclient_step("5", "Type ************* in PasswordPassword passwordbox", "snapshot=Action_5.inf");
	truclient_step("6", "Click on SIGN IN button", "snapshot=Action_6.inf");
	lr_end_transaction("AOS-TruClient-S03-02 Sign In",0);
	truclient_step("7", "Wait Math.floor(Math.random() * (26- 15) + 15) seconds", "snapshot=Action_7.inf");
	lr_start_transaction("AOS-TruClient-S03-03 Sign Out");
	truclient_step("8", "Click on button (1) button", "snapshot=Action_8.inf");
	truclient_step("9", "Click on Sign out label", "snapshot=Action_9.inf");
	lr_end_transaction("AOS-TruClient-S03-03 Sign Out",0);

	return 0;
}
