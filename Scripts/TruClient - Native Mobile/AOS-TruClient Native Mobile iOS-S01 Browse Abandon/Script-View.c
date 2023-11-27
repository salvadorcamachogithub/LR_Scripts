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
	lr_start_transaction("AOS-TruClient Native Mobile iOS-S01-01 Laptops");
	truclient_step("2", "Select row 0 section 0 at Table (0) Table", "snapshot=Action_2.inf");
	lr_end_transaction("AOS-TruClient Native Mobile iOS-S01-01 Laptops",0);
	truclient_step("3", "Wait Math.floor(Math.random() * (26- 15) + 15) seconds", "snapshot=Action_3.inf");
	lr_start_transaction("AOS-TruClient Native Mobile iOS-S01-02 Product");
	truclient_step("4", "Select item 2 , section 0 at CollectionView (0) CollectionView", "snapshot=Action_4.inf");
	lr_end_transaction("AOS-TruClient Native Mobile iOS-S01-02 Product",0);
	truclient_step("5", "Wait Math.floor(Math.random() * (26- 15) + 15) seconds", "snapshot=Action_5.inf");
	lr_start_transaction("AOS-TruClient Native Mobile iOS-S01-03 Add To Cart");
	truclient_step("6", "Tap on ADD TO CART Button", "snapshot=Action_6.inf");
	truclient_step("7", "Tap on Ok Button", "snapshot=Action_7.inf");
	lr_end_transaction("AOS-TruClient Native Mobile iOS-S01-03 Add To Cart",0);
	truclient_step("8", "Wait Math.floor(Math.random() * (26- 15) + 15) seconds", "snapshot=Action_8.inf");
	lr_start_transaction("AOS-TruClient Native Mobile iOS-S01-04 Home");
	truclient_step("9", "Tap on Menu Button", "snapshot=Action_9.inf");
	truclient_step("10", "Select row 1 section 0 at Table (0) Table", "snapshot=Action_10.inf");
	lr_end_transaction("AOS-TruClient Native Mobile iOS-S01-04 Home",0);

	return 0;
}

vuser_end()
{
	return 0;
}
