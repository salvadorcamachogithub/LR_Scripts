//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("West Wind-TruClient-S01-01 Homepage");
	truclient_step("1", "Navigate to 'https://west-wind.com/w.../fileupload.wwd'", "snapshot=Action_1.inf");
	lr_end_transaction("West Wind-TruClient-S01-01 Homepage",0);
	lr_start_transaction("West Wind-TruClient-S01-02 Upload File Standard HTML Form Upload");
	truclient_step("2", "Set C:\Users\demo\Pictures\M...count Mockup.png on Upload filebox", "snapshot=Action_2.inf");
	lr_end_transaction("West Wind-TruClient-S01-02 Upload File Standard HTML Form Upload",0);
	lr_start_transaction("West Wind-TruClient-S01-03 Ajax File Upload");
	truclient_step("3", "Set C:\Users\demo\Pictures\M... Home Mockup.png on Upload filebox", "snapshot=Action_3.inf");
	lr_end_transaction("West Wind-TruClient-S01-03 Ajax File Upload",0);
	lr_start_transaction("West Wind-TruClient-S01-04 Uppy UI");
	truclient_step("4", "Click on Uppy Uploader Popup UI button", "snapshot=Action_4.inf");
	truclient_step("5", "Click on Browse button", "snapshot=Action_5.inf");
	truclient_step("6", "Set C:\Users\demo\Pictures\M...Login Mockup.png on filebox (1) filebox", "snapshot=Action_6.inf");
	lr_end_transaction("West Wind-TruClient-S01-04 Uppy UI",0);

	return 0;
}
