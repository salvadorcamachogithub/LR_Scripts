Action()
{

/*

Updated: 04.2025  
Script created by Salvador Camacho

Update parameter Host with the IP of your Nimbus Windows Virtual Machine or VM that has SiteScope

This script was created with best practices, so it is more resilient, such as:
* Transaction naming
* No third party
* One validation per transaction
* Think times at the end of each transaction to better simulate user behavior
* Nimbus Windows Host IP parametrized

This script uses RDP to connect to the Nimbus Windows VM that has SiteScope, it launches it, clicks on the AOS Monitor folder, exits SiteScope and closes RDP connection

Runtime Settings were set to log only on errors and generate snapshot on errors, think times 75% to 150%

This script has 8 transactions:  
SiteScope-RDP-S01-01 Connect  
SiteScope-RDP-S01-02 Log In  
SiteScope-RDP-S01-03 Click ADM Folder  
SiteScope-RDP-S01-04 Start SiteScope Launcher  
SiteScope-RDP-S01-05 Launch SiteScope  
SiteScope-RDP-S01-06 Click on AOS Monitor Folder  
SiteScope-RDP-S01-07 Exit SiteScope  
SiteScope-RDP-S01-08 Close ADM Folder

*/

lr_start_transaction("SiteScope-RDP-S01-01 Connect");

	rdp_connect_server("Host={Host}", 
		"UserName=demo", 
		"EncryptedPassword=62523a26e", 
		"Domain=NIMBUSCLIENT", 
		RDP_LAST);


lr_end_transaction("SiteScope-RDP-S01-01 Connect",LR_AUTO);

	lr_think_time(10);


lr_start_transaction("SiteScope-RDP-S01-02 Log In");

	/*	This script contains keyboard steps without automatic synchronization.
		Consider adding a synchronization step before the relevant keyboard steps.*/

	rdp_key("StepDescription=Key Press 1", 
		"Snapshot=snapshot_177.inf", 
		"KeyValue=VK_TAB", 
		RDP_LAST);

	rdp_type("StepDescription=Typed Text 1", 
		"Snapshot=snapshot_178.inf", 
		"TypedKeys=Password1", 
		RDP_LAST);

	rdp_key("StepDescription=Key Press 2", 
		"Snapshot=snapshot_179.inf", 
		"KeyValue=VK_RETURN", 
		RDP_LAST);

lr_end_transaction("SiteScope-RDP-S01-02 Log In",LR_AUTO);

	lr_think_time(10);

	
lr_start_transaction("SiteScope-RDP-S01-03 Click ADM Folder");

	rdp_sync_on_image("StepDescription=Image Synchronization 1", 
		"WaitFor=Appear", 
		"AddOffsetToInput=Default", 
		IMAGEDATA, 
		"ImageLeft=18", "ImageTop=175", "ImageWidth=40", "ImageHeight=40", "ImageName=snapshot_181.png", ENDIMAGE, 
		RDP_LAST);

	rdp_mouse_double_click("StepDescription=Mouse Double Click 1", 
		"Snapshot=snapshot_180.inf", 
		"MouseX=38", 
		"MouseY=195", 
		"MouseButton=LEFT_BUTTON", 
		"Origin=Default", 
		RDP_LAST);

lr_end_transaction("SiteScope-RDP-S01-03 Click ADM Folder",LR_AUTO);

	lr_think_time(10);
	

lr_start_transaction("SiteScope-RDP-S01-04 Start SiteScope Launcher");

	rdp_sync_on_image("StepDescription=Image Synchronization 2",
		"WaitFor=Appear",
		"AddOffsetToInput=Default",
		"Tolerance=High",
		IMAGEDATA,
		"ImageLeft=497",
		"ImageTop=347",
		"ImageWidth=40",
		"ImageHeight=40",
		"ImageName=snapshot_185.png",
		ENDIMAGE,
		RDP_LAST);

	rdp_mouse_double_click("StepDescription=Mouse Double Click 2", 
		"Snapshot=snapshot_184.inf", 
		"MouseX=517", 
		"MouseY=367", 
		"MouseButton=LEFT_BUTTON", 
		"Origin=Default", 
		RDP_LAST);

lr_end_transaction("SiteScope-RDP-S01-04 Start SiteScope Launcher",LR_AUTO);

	lr_think_time(10);

	
lr_start_transaction("SiteScope-RDP-S01-05 Launch SiteScope");

	rdp_sync_on_image("StepDescription=Image Synchronization 3", 
		"WaitFor=Appear", 
		"AddOffsetToInput=Default", 
		IMAGEDATA, 
		"ImageLeft=1343", "ImageTop=20", "ImageWidth=40", "ImageHeight=40", "ImageName=snapshot_189.png", ENDIMAGE, 
		RDP_LAST);

	rdp_mouse_click("StepDescription=Mouse Click 1", 
		"Snapshot=snapshot_188.inf", 
		"MouseX=1363", 
		"MouseY=40", 
		"MouseButton=LEFT_BUTTON", 
		"Origin=Default", 
		RDP_LAST);

	rdp_sync_on_image("StepDescription=Image Synchronization 4",
		"WaitFor=Appear",
		"AddOffsetToInput=Default",
		"Tolerance=High",
		IMAGEDATA,
		"ImageLeft=62",
		"ImageTop=49",
		"ImageWidth=40",
		"ImageHeight=40",
		"ImageName=snapshot_191.png",
		ENDIMAGE,
		RDP_LAST);

	rdp_mouse_click("StepDescription=Mouse Click 2", 
		"Snapshot=snapshot_190.inf", 
		"MouseX=82", 
		"MouseY=69", 
		"MouseButton=LEFT_BUTTON", 
		"Origin=Default", 
		RDP_LAST);

lr_end_transaction("SiteScope-RDP-S01-05 Launch SiteScope",LR_AUTO);

	lr_think_time(10);
	

lr_start_transaction("SiteScope-RDP-S01-06 Click on SiteScope Folder");

	rdp_sync_on_image("StepDescription=Image Synchronization 5", 
		"WaitFor=Appear", 
		"AddOffsetToInput=Default", 
		IMAGEDATA, 
		"ImageLeft=78", "ImageTop=140", "ImageWidth=40", "ImageHeight=40", "ImageName=snapshot_193.png", ENDIMAGE, 
		RDP_LAST);

	rdp_mouse_click("StepDescription=Mouse Click 3", 
		"Snapshot=snapshot_192.inf", 
		"MouseX=98", 
		"MouseY=160", 
		"MouseButton=LEFT_BUTTON", 
		"Origin=Default", 
		RDP_LAST);

lr_end_transaction("SiteScope-RDP-S01-06 Click on SiteScope Folder",LR_AUTO);

	lr_think_time(10);
	

lr_start_transaction("SiteScope-RDP-S01-07 Exit SiteScope");

	rdp_sync_on_image("StepDescription=Image Synchronization 6", 
		"WaitFor=Appear", 
		"AddOffsetToInput=Default", 
		IMAGEDATA, 
		"ImageLeft=1352", "ImageTop=2", "ImageWidth=40", "ImageHeight=33", "ImageName=snapshot_195.png", ENDIMAGE, 
		//"ImageLeft=1352", "ImageTop=2", "ImageWidth=40", "ImageHeight=33", "ImageName=snapshot_181.png", ENDIMAGE, 
		RDP_LAST);

	rdp_mouse_click("StepDescription=Mouse Click 4", 
		"Snapshot=snapshot_194.inf", 
		"MouseX=1372", 
		"MouseY=15", 
		"MouseButton=LEFT_BUTTON", 
		"Origin=Default", 
		RDP_LAST);

lr_end_transaction("SiteScope-RDP-S01-07 Exit SiteScope",LR_AUTO);

	lr_think_time(10);
	

lr_start_transaction("SiteScope-RDP-S01-08 Close ADM Folder");

	rdp_sync_on_image("StepDescription=Image Synchronization 7", 
		"WaitFor=Appear", 
		"AddOffsetToInput=Default", 
		IMAGEDATA, 
		"ImageLeft=1239", "ImageTop=180", "ImageWidth=40", "ImageHeight=40", "ImageName=snapshot_197.png", ENDIMAGE, 
		RDP_LAST);

	rdp_mouse_click("StepDescription=Mouse Click 5", 
		"Snapshot=snapshot_196.inf", 
		"MouseX=1259", 
		"MouseY=200", 
		"MouseButton=LEFT_BUTTON", 
		"Origin=Default", 
		RDP_LAST);

	rdp_sync_on_image("StepDescription=Image Synchronization 8", 
		"WaitFor=Appear", 
		"AddOffsetToInput=Default", 
		IMAGEDATA, 
		"ImageLeft=1239", "ImageTop=180", "ImageWidth=40", "ImageHeight=40", "ImageName=snapshot_199.png", ENDIMAGE, 
		RDP_LAST);

	rdp_mouse_click("StepDescription=Mouse Click 6", 
		"Snapshot=snapshot_198.inf", 
		"MouseX=1259", 
		"MouseY=200", 
		"MouseButton=LEFT_BUTTON", 
		"Origin=Default", 
		RDP_LAST);

lr_end_transaction("SiteScope-RDP-S01-08 Close ADM Folder",LR_AUTO);

	lr_think_time(10);
	

	rdp_disconnect_server("StepDescription=Server Disconnect 1", 
		RDP_LAST);

	return 0;
}