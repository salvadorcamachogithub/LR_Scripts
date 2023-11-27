Action()
{
	
	web_set_sockets_option("SSL_VERSION", "AUTO");
	
	web_reg_save_param_json(
		"ParamName=productId",
		"QueryString=$..products..productId",
		"SelectAll=Yes",
		LAST);

lr_start_transaction("AOS-Web-Mobile HTTP Traffic-S01-01 Laptops");

	web_url("products", 
		"URL={AOS_URL}/catalog/api/v1/categories/1/products", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={AOS_URL}/", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	web_url("attributes", 
		"URL={AOS_URL}/catalog/api/v1/categories/attributes", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={AOS_URL}/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);
		
	web_reg_find("Text=category-type-products", 
		LAST);

	web_url("category-page.html", 
		"URL={AOS_URL}/app/views/category-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={AOS_URL}/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

lr_end_transaction("AOS-Web-Mobile HTTP Traffic-S01-01 Laptops",LR_AUTO);

	lr_think_time(10);
	
	
	// Random Value for productId
	lr_save_string(lr_paramarr_random("productId"),"randomProductId");

lr_start_transaction("AOS-Web-Mobile HTTP Traffic-S01-02 Product");

	web_url("randomProduct", 
		"URL={AOS_URL}/catalog/api/v1/products/{randomProductId}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={AOS_URL}/", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	web_url("all_data", 
		"URL={AOS_URL}/catalog/api/v1/categories/all_data", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={AOS_URL}/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	web_url("products_2", 
		"URL={AOS_URL}/catalog/api/v1/categories/4/products", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={AOS_URL}/", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		LAST);
		
	web_reg_find("Text=productProperties", 
		LAST);

	web_url("product-page.html", 
		"URL={AOS_URL}/app/views/product-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={AOS_URL}/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

lr_end_transaction("AOS-Web-Mobile HTTP Traffic-S01-02 Product",LR_AUTO);

	lr_think_time(10);


lr_start_transaction("AOS-Web-Mobile HTTP Traffic-S01-03 Add To Cart");

	web_url("AddToCart",
		"URL={AOS_URL}/catalog/fetchImage?image_id={image_id}",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		LAST);

lr_end_transaction("AOS-Web-Mobile HTTP Traffic-S01-03 Add To Cart",LR_AUTO);

	lr_think_time(10);
	
	
	web_reg_find("Text=<article id=\"our_products\">", 
		LAST);

lr_start_transaction("AOS-Web-Mobile HTTP Traffic-S01-04 Home");

	web_url("home-page.html", 
		"URL={AOS_URL}/app/views/home-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={AOS_URL}/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

lr_end_transaction("AOS-Web-Mobile HTTP Traffic-S01-04 Home",LR_AUTO);

	lr_think_time(10);


	return 0;
}