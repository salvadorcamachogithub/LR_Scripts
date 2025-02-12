Action()
{
	
/*

Updated: 02.2025
Script created by Salvador Camacho

This script was created with best practices, so it is more resilient, such as:
* Transaction naming
* No add cookies
* No third party
* One validation per transaction
* Think times at the end of each transaction to better simulate user behavior
* Main URL parametrized, Public AOS by default

This script randomly selects a product from the category and then goes to it in transaction number 3 and adds it to the cart to then abandon the cart
The Add To Cart step is "simulated" (it hits a random AOS product image) as there is no http traffic in AOS when adding to the cart

Runtime Settings were set to log only on errors and generate snapshot on errors, think times 75% to 150%

There is a TruClient script that does the same steps

This script has 5 transactions
AOS-Web-S01-01 Access AOS URL
AOS-Web-S01-02 Go To Speakers
AOS-Web-S01-03 Random Product
AOS-Web-S01-04 Add To Cart
AOS-Web-S01-05 Checkout

*/

	web_set_sockets_option("SSL_VERSION", "AUTO");
	
	web_reg_find("Text=Advantage Shopping", 
		LAST);

lr_start_transaction("AOS-Web-S01-01 Access AOS URL");

	web_url("Main AOS URL", 
		"URL={AOS_URL}/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/main.min.js", ENDITEM, 
		"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer={AOS_URL}/css/main.min.css", ENDITEM, 
		"Url=/services.properties", ENDITEM, 
		"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer={AOS_URL}/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer={AOS_URL}/css/main.min.css", ENDITEM, 
		"Url=/css/images/logo.png", ENDITEM, 
		"Url=/css/images/closeDark.png", ENDITEM, 
		"Url=/css/images/arrow_right.png", "Referer={AOS_URL}/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer={AOS_URL}/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer={AOS_URL}/css/main.min.css", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=headphones", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=tablets", ENDITEM, 
		"Url=/css/images/Special-offer.jpg", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=laptops", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=speakers", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=mice", ENDITEM, 
		"Url=/css/images/Banner1.jpg", ENDITEM, 
		"Url=/css/images/facebook.png", ENDITEM, 
		"Url=/css/images/linkedin.png", ENDITEM, 
		"Url=/css/images/twitter.png", ENDITEM, 
		"Url=/css/images/GoUp.png", ENDITEM, 
		"Url=/css/images/Popular-item1.jpg", ENDITEM, 
		"Url=/css/images/Popular-item2.jpg", ENDITEM, 
		"Url=/css/images/Popular-item3.jpg", ENDITEM, 
		"Url=/css/images/Banner3.jpg", ENDITEM, 
		"Url=/css/images/Banner2.jpg", ENDITEM, 
		"Url=/css/images/category_banner_4.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4700", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4300", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4600", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4200", ENDITEM, 
		"Url=/css/images/Filter.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4400", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4500", ENDITEM, 
		LAST);
		
	web_url("ALL", 
		"URL={AOS_URL}/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={AOS_URL}/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);
		
	web_custom_request("GetAccountConfigurationRequest", 
		"URL={AOS_URL}/accountservice/ws/GetAccountConfigurationRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer={AOS_URL}/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);
		
	web_url("categories", 
		"URL={AOS_URL}/catalog/api/v1/categories", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={AOS_URL}/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);
		
	web_url("search", 
		"URL={AOS_URL}/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={AOS_URL}/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);
		
	web_url("popularProducts.json", 
		"URL={AOS_URL}/app/tempFiles/popularProducts.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={AOS_URL}/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home-page.html", 
		"URL={AOS_URL}/app/views/home-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={AOS_URL}/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

lr_end_transaction("AOS-Web-S01-01 Access AOS URL",LR_AUTO);

	lr_think_time(10);
	
	
	web_reg_save_param_json(
		"ParamName=productId",
		"QueryString=$..products..productId",
		"SelectAll=Yes",
		LAST);

lr_start_transaction("AOS-Web-S01-02 Go To Speakers");
	
	web_url("products", 
		"URL={AOS_URL}/catalog/api/v1/categories/4/products", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={AOS_URL}/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_url("attributes", 
		"URL={AOS_URL}/catalog/api/v1/categories/attributes", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={AOS_URL}/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);
	
	web_reg_find("Text=category-type-products", 
		LAST);

	web_url("category-page.html", 
		"URL={AOS_URL}/app/views/category-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={AOS_URL}/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

lr_end_transaction("AOS-Web-S01-02 Go To Speakers",LR_AUTO);

	lr_think_time(10);
	
	
	// Random Value for productId
	lr_save_string(lr_paramarr_random("productId"),"randomProductId");

lr_start_transaction("AOS-Web-S01-03 Random Product");
		
	web_url("randomProduct", 
		"URL={AOS_URL}/catalog/api/v1/products/{randomProductId}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={AOS_URL}/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_url("products_2", 
		"URL={AOS_URL}/catalog/api/v1/categories/4/products", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={AOS_URL}/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);
		
	web_url("all_data", 
		"URL={AOS_URL}/catalog/api/v1/categories/all_data", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={AOS_URL}/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);
		
	web_reg_find("Text=productProperties", 
		LAST);

	web_url("product-page.html", 
		"URL={AOS_URL}/app/views/product-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={AOS_URL}/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

lr_end_transaction("AOS-Web-S01-03 Random Product",LR_AUTO);

	lr_think_time(10);


lr_start_transaction("AOS-Web-S01-04 Add To Cart");

	web_url("AddToCart",
		"URL={AOS_URL}/catalog/fetchImage?image_id={image_id}",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		LAST);

lr_end_transaction("AOS-Web-S01-04 Add To Cart",LR_AUTO);

	lr_think_time(10);
	
	
	web_reg_find("Text=SHOPPING_CART", 
		LAST);

lr_start_transaction("AOS-Web-S01-05 Checkout");
		
	web_url("user-not-login-page.html", 
		"URL={AOS_URL}/app/order/views/user-not-login-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={AOS_URL}/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

lr_end_transaction("AOS-Web-S01-05 Checkout",LR_AUTO);

	lr_think_time(10);


	return 0;
}

