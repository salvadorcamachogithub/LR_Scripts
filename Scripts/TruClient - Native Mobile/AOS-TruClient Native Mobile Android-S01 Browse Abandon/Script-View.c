//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

vuser_init()
{
	return 0;
}

Action()
{
	truclient_step("1", "Wait Math.floor(Math.random() * (26- 15) + 15) seconds", "snapshot=Action_1.inf");
	lr_start_transaction("AOS-TruClient Native Mobile Android-S01-01 Laptops");
	truclient_step("2", "Tap on imageViewCategory View", "snapshot=Action_2.inf");
	lr_end_transaction("AOS-TruClient Native Mobile Android-S01-01 Laptops",0);
	truclient_step("3", "Wait Math.floor(Math.random() * (26- 15) + 15) seconds", "snapshot=Action_3.inf");
	lr_start_transaction("AOS-TruClient Native Mobile Android-S01-02 Product");
	truclient_step("4", "Select row 2 section 0 at gridViewProducts Table", "snapshot=Action_4.inf");
	lr_end_transaction("AOS-TruClient Native Mobile Android-S01-02 Product",0);
	truclient_step("5", "Wait Math.floor(Math.random() * (26- 15) + 15) seconds", "snapshot=Action_5.inf");
	lr_start_transaction("AOS-TruClient Native Mobile Android-S01-03 Add To Cart");
	truclient_step("6", "Tap on ADD TO CART Button", "snapshot=Action_6.inf");
	lr_end_transaction("AOS-TruClient Native Mobile Android-S01-03 Add To Cart",0);
	truclient_step("7", "Wait Math.floor(Math.random() * (26- 15) + 15) seconds", "snapshot=Action_7.inf");
	lr_start_transaction("AOS-TruClient Native Mobile Android-S01-04 Home");
	truclient_step("8", "Tap on imageViewBack View", "snapshot=Action_8.inf");
	truclient_step("9", "Tap on imageViewBack View", "snapshot=Action_9.inf");
	truclient_step("10", "Tap on imageViewMenu View", "snapshot=Action_10.inf");
	truclient_step("11", "Tap on HOME Label", "snapshot=Action_11.inf");
	lr_end_transaction("AOS-TruClient Native Mobile Android-S01-04 Home",0);

	return 0;
}

vuser_end()
{
	return 0;
}
