//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("West Wind-TruClient-S01-01 Homepage");
	truclient_step("1", "Navigate to 'https://west-wind.com/w.../fileupload.wwd'", "snapshot=Action_1.inf");
	lr_end_transaction("West Wind-TruClient-S01-01 Homepage",0);
	truclient_step("2", "Wait Math.floor(Math.random() * (26- 15) + 15) seconds", "snapshot=Action_2.inf");
	lr_start_transaction("West Wind-TruClient-S01-02 Upload File Standard HTML Form Upload");
	truclient_step("3", "Set C:\Users\demo\Pictures\M...count Mockup.png on Upload filebox", "snapshot=Action_3.inf");
	lr_end_transaction("West Wind-TruClient-S01-02 Upload File Standard HTML Form Upload",0);
	truclient_step("4", "Wait Math.floor(Math.random() * (26- 15) + 15) seconds", "snapshot=Action_4.inf");
	lr_start_transaction("West Wind-TruClient-S01-03 Ajax File Upload");
	truclient_step("5", "Set C:\Users\demo\Pictures\M... Home Mockup.png on Upload filebox", "snapshot=Action_5.inf");
	lr_end_transaction("West Wind-TruClient-S01-03 Ajax File Upload",0);
	truclient_step("6", "Wait Math.floor(Math.random() * (26- 15) + 15) seconds", "snapshot=Action_6.inf");
	lr_start_transaction("West Wind-TruClient-S01-04 Uppy UI");
	truclient_step("7", "Click on Uppy Uploader Popup UI button", "snapshot=Action_7.inf");
	truclient_step("8", "Click on Browse button", "snapshot=Action_8.inf");
	truclient_step("9", "Set C:\Users\demo\Pictures\M...Login Mockup.png on filebox (1) filebox", "snapshot=Action_9.inf");
	lr_end_transaction("West Wind-TruClient-S01-04 Uppy UI",0);

	return 0;
}
