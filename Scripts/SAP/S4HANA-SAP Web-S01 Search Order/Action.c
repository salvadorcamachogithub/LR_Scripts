Action()
{
	
/*

Updated: 05.2025  
Script created by Salvador Camacho

This SAP script requires SoftEther VPN Client Manager to connect to DEMONET

It goes against SAP S/4HANA Fiori LaunchPad, https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN#Shell-home

This script was created with best practices, so it is more resilient, such as:
* Transaction naming
* No third party
* One validation per transaction
* Think times at the end of each transaction to better simulate user behavior
* SAP credentials parametrized

This SAP Web script logs on, enters Tcode VA03 to search for an order, searches an order, goes to it, then signs out

Runtime Settings were set to log only on errors and generate snapshot on errors, think times 75% to 150%

This script has 5 transactions:  
S4HANA-SAP Web-S01-01 Starting URL
S4HANA-SAP Web-S01-02 Log On
S4HANA-SAP Web-S01-03 Enter Tcode in Apps (VA03)
S4HANA-SAP Web-S01-04 Search Order
S4HANA-SAP Web-S01-05 Sign Out

*/

	web_set_sockets_option("SSL_VERSION", "AUTO");
	
	web_reg_find("Text=Logon", 
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='7ePNCZufNneji6eugXAXK7TUJTLdpL7EMhWvJHKkNZU' 
Name ='sap-login-XSRF' 
Type ='Rule' 
AppName ='SAP_Fiori' 
RuleName ='sap-login'*/
	web_reg_save_param_regexp(
		"ParamName=sap-login-XSRF",
		"RegExp=name=\"sap-login-XSRF\"\\ value=\"(.*?)&\\#x3d",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		"RequestUrl=*/flp*",
		LAST);

lr_start_transaction("S4HANA-SAP Web-S01-01 Starting URL");

	web_url("flp", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/sap/public/bc/ui2/logon/themes/sap_belize/img/background.jpg", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/public/bc/ui2/logon/themes/sap_belize/library.css", ENDITEM, 
		LAST);

lr_end_transaction("S4HANA-SAP Web-S01-01 Starting URL",LR_AUTO);

	lr_think_time(10);
	
	
	web_reg_find("Text=Loading", 
		LAST);

lr_start_transaction("S4HANA-SAP Web-S01-02 Log On");

	web_submit_data("flp_2",
		"Action=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?_sap-hash=JTIzU2hlbGwtaG9tZQ",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN",
		"Snapshot=t2.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=sap-system-login-oninputprocessing", "Value=onLogin", ENDITEM,
		"Name=sap-urlscheme", "Value=", ENDITEM,
		"Name=sap-system-login", "Value=onLogin", ENDITEM,
		"Name=sap-system-login-basic_auth", "Value=", ENDITEM,
		"Name=sap-accessibility", "Value=", ENDITEM,
		"Name=sap-login-XSRF", "Value={sap-login-XSRF}=", ENDITEM,
		"Name=sap-system-login-cookie_disabled", "Value=", ENDITEM,
		"Name=sap-hash", "Value=JTIzU2hlbGwtaG9tZQ", ENDITEM,
		"Name=sap-user", "Value={sapUser}", ENDITEM,
		"Name=sap-password", "Value={sapPassword}", ENDITEM,
		"Name=sap-client", "Value=100", ENDITEM,
		"Name=__sap-sl__dummy", "Value=1", ENDITEM,
		"Name=sap-language", "Value=EN", ENDITEM,
		LAST);

	web_submit_form("flp_3", 
		"Snapshot=t3.inf", 
		ITEMDATA, 
		EXTRARES, 
		"Url=../ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell_abap/thirdparty/sap-xhrlib-esm.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell_abap/bootstrap/evo/abap.js", ENDITEM, 
		"Url=../ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell_abap/bootstrap/evo/core-min-0.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=../ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell_abap/bootstrap/evo/core-min-3.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=../ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell_abap/bootstrap/evo/core-min-1.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=../ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell_abap/bootstrap/evo/core-min-2.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=../ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/core/themes/sap_horizon/fonts/72-Regular.woff2", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/core/themes/sap_horizon/library.css", ENDITEM, 
		"Url=../ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/core/themes/sap_horizon/fonts/72-Bold.woff2", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/core/themes/sap_horizon/library.css", ENDITEM, 
		"Url=../ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/core/themes/sap_horizon/fonts/SAP-icons.woff2", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/core/themes/sap_horizon/library.css", ENDITEM, 
		"Url=../ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/core/themes/sap_horizon/fonts/72-SemiboldDuplex.woff2", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/core/themes/sap_horizon/library.css", ENDITEM, 
		"Url=../ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/themes/base/fonts/sap-launch-icons.ttf", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/themes/sap_horizon/library.css", ENDITEM, 
		"Url=../ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/core/themes/sap_horizon/fonts/72-Light.woff2", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/core/themes/sap_horizon/library.css", ENDITEM, 
		LAST);

	web_url("manifest.json", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/m/manifest.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_url("start_up", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/start_up?so=%2A&action=%2A&systemAliasesFormat=object&sap-language=EN&sap-client=100&shellType=FLP&depth=0&sap-cache-id=FC8EB3B16D1A8DF96743DF5FAA94F1C2", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/m/messagebundle_en.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=../ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/renderer/resources/resources_en.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		LAST);

	web_url("manifest.json_2", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/core/manifest.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=messagebundle_en.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		LAST);

	web_url("en.json", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/core/cldr/en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/services/MessageBroker.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/renderers/fiori2/RendererExtensions.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		LAST);

	web_url("sap-ui-version.json", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap-ui-version.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=sap/ushell/renderers/fiori2/History.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		LAST);
		
	web_reg_save_param_ex(
		"ParamName=x-csrf-token",
		"LB=",
		"RB=\r\n",
		SEARCH_FILTERS,
		"Scope=HEADERS",
		"HeaderNames=x-csrf-token",
		LAST);
		
	web_add_auto_header("X-CSRF-Token",
		"Fetch");

	web_url("PersContainers(category='U',id='sap.ushell.cdm3-1.personalization')", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/UI2/INTEROP/PersContainers(category='U',id='sap.ushell.cdm3-1.personalization')?$expand=PersContainerItems", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/renderers/fiori2/LogonFrameProvider.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/sap/product_homes1/~767B4722490507043661C998DEEB3D8A~5/manifest.json?sap-language=EN&sap-client=100", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell_abap/bootstrap/evo/core-ext-light-1.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/themes/base/img/SAPLogo.svg", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/fl/library-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell_abap/bootstrap/evo/core-ext-light-3.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/dt/library-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/fl/messagebundle_en.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/insights/library-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/unified/library-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/table/library-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		LAST);
	
	web_add_auto_header("X-CSRF-Token",
		"{x-csrf-token}");

	web_url("pageSet('SAP_BASIS_PG_UI_MYHOME')", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/UI2/FDM_PAGE_RUNTIME_SRV/pageSet('SAP_BASIS_PG_UI_MYHOME')?$expand=sections/viz,vizReferences/chipBags/properties,tileTypes/vizOptions/displayFormats/supported", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell_abap/bootstrap/evo/core-ext-light-0.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/insights/messagebundle_en.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell_abap/bootstrap/evo/core-ext-light-2.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/unified/messagebundle_en.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/table/messagebundle_en.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/integration/library-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/sap/product_homes1/~767B4722490507043661C998DEEB3D8A~5/Component-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/integration/messagebundle_en.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/fl/library-preload-write.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/fl/write/api/ControlPersonalizationWriteAPI.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/fl/library-preload-apply.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/fl/write/api/ChangesWriteAPI.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/fl/apply/_internal/appVariant/DescriptorChangeTypes.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/fl/descriptorRelated/api/DescriptorChangeFactory.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/fl/write/_internal/appVariant/AppVariantInlineChangeFactory.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/fl/descriptorRelated/internal/Utils.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/fl/write/_internal/appVariant/AppVariantInlineChange.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/f/themes/sap_horizon/library.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/fl/themes/sap_horizon/library.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/insights/themes/sap_horizon/library.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/dt/themes/sap_horizon/library.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/layout/themes/sap_horizon/library.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/unified/themes/sap_horizon/library.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/table/themes/sap_horizon/library.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/sap/product_homes1/~767B4722490507043661C998DEEB3D8A~5/css/placeHolder.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/sap/product_homes1/~767B4722490507043661C998DEEB3D8A~5/css/style.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/integration/themes/sap_horizon/library.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		LAST);

	web_url("ux.eng.s4producthomes1", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/lrep/flex/data/~ovIgjtb1JYwUkHqq3KqYw+QbcqQ=~/ux.eng.s4producthomes1?sap-client=100&sap-language=EN", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/utils/AppType.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		LAST);

	web_url("manifest.json_3", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/f/manifest.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=messagebundle_en.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		LAST);

	web_url("manifest.json_4", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/components/shell/MenuBar/manifest.json?sap-language=EN&sap-client=100", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/themes/base/img/launchpad_favicon.ico", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		LAST);

	web_url("PersContainers(category='P',id='ux.eng.s4producthomes1')", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/UI2/INTEROP/PersContainers(category='P',id='ux.eng.s4producthomes1')?$expand=PersContainerItems&sap-cache-id=00DE468A469579526F8D09A4E96A7D53", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/components/shell/MenuBar/Component-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		LAST);

	web_url("cardManifest.json", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/services/_CommonDataModel/vizTypeDefaults/cardManifest.json?sap-language=EN&sap-client=100", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/tnt/library-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/tnt/messagebundle_en.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		LAST);

	web_url("PersContainers(category='P',id='sap.ushell.UserDefaultParameter')", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/UI2/INTEROP/PersContainers(category='P',id='sap.ushell.UserDefaultParameter')?$expand=PersContainerItems&sap-cache-id=00DE468A469579526F8D09A4E96A7D53", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/tnt/themes/sap_horizon/library.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		LAST);

	web_url("manifest.json_5", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/components/shell/NavigationBarMenu/manifest.json?sap-language=EN&sap-client=100", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../PostLoadingHeaderEnhancement/Component-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		LAST);

	web_custom_request("FDM_PAGE_RUNTIME_SRV", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/UI2/FDM_PAGE_RUNTIME_SRV", 
		"Method=HEAD", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_url("PersContainers(category='P',id='flp.settings.FlpSettings')", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/UI2/INTEROP/PersContainers(category='P',id='flp.settings.FlpSettings')?$expand=PersContainerItems&sap-cache-id=00DE468A469579526F8D09A4E96A7D53", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("$batch", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/sap/C_SITNMYSITUATION_CDS/$batch", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=multipart/mixed", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"EncType=multipart/mixed;boundary=batch_id_1746768218717_01", 
		"Body=--batch_id_1746768218717_01\r\nContent-Type:application/http\r\nContent-Transfer-Encoding:binary\r\n\r\nGET C_SitnMySituation/$count HTTP/1.1 \r\nAccept:application/json\r\n\r\n\r\n--batch_id_1746768218717_01--", 
		LAST);

	web_custom_request("$batch_2", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/IWPGW/TASKPROCESSING;mo;v=2/$batch", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=multipart/mixed", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=multipart/mixed;boundary=batch_id_1746768218716_01", 
		"Body=--batch_id_1746768218716_01\r\nContent-Type:application/http\r\nContent-Transfer-Encoding:binary\r\n\r\nGET TaskCollection/$count?$filter=(Status%20eq%20'READY'%20or%20Status%20eq%20'RESERVED'%20or%20Status%20eq%20'IN_PROGRESS'%20or%20Status%20eq%20'EXECUTED') HTTP/1.1 \r\nAccept:application/json\r\n\r\n\r\n--batch_id_1746768218716_01\r\nContent-Type:application/http\r\nContent-Transfer-Encoding:binary\r\n\r\nGET TaskCollection?$format=json&$skip=0&$top=5&$orderby=CreatedOn%20desc&$filter="
		"(Status%20eq%20'READY'%20or%20Status%20eq%20'RESERVED'%20or%20Status%20eq%20'IN_PROGRESS'%20or%20Status%20eq%20'EXECUTED')&$select=SAP__Origin,InstanceID,TaskDefinitionID,TaskTitle,CreatedByName,CreatedBy,CompletionDeadLine,Priority,CreatedOn HTTP/1.1 \r\nAccept:application/json\r\n\r\n\r\n--batch_id_1746768218716_01--", 
		EXTRARES, 
		"Url=/sap/opu/odata/sap/SD_F1873_SO_WL_SRV/C_SalesOrderWl_F1873/$count?sap-language=EN", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/opu/odata/SAP/SD_CUSTOMER_INVOICES_CREATE/C_BillingDueListItem_F0798/$count?sap-language=EN", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		LAST);

	web_custom_request("$batch_3", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/sap/C_SITNMYSITUATION_CDS/$batch", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=multipart/mixed", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"EncType=multipart/mixed;boundary=batch_id_1746768219311_01", 
		"Body=--batch_id_1746768219311_01\r\nContent-Type:application/http\r\nContent-Transfer-Encoding:binary\r\n\r\nGET C_SitnMySituation?$top=5&$orderby=CreationDateTime%20desc&$format=json&$expand=to_InstanceMessageParameter HTTP/1.1 \r\nAccept:application/json\r\n\r\n\r\n--batch_id_1746768219311_01--", 
		EXTRARES, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/components/shell/UserActionsMenu/Component-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/components/shell/NavigationBarMenu/Component-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/m/themes/base/illustrations/sapIllus-Spot-EmptyPlanningCalendar.svg", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/components/shell/UserImage/Component-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/m/themes/base/illustrations/sapIllus-Patterns.svg", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/components/shell/Notifications/Component-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/utils/Deferred.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/opu/odata4/iwngw/notification/default/iwngw/notification_srv/0001/Notifications/$count", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		LAST);

	web_url("GetBadgeNumber()", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata4/iwngw/notification/default/iwngw/notification_srv/0001/GetBadgeNumber()", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_url("NotificationTypePersonalizationSet", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata4/iwngw/notification/default/iwngw/notification_srv/0001/NotificationTypePersonalizationSet", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Channels(ChannelId='SAP_EMAIL')", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata4/iwngw/notification/default/iwngw/notification_srv/0001/Channels(ChannelId='SAP_EMAIL')", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	web_url("PersContainers(category='P',id='sap.ushell.services.Notifications')", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/UI2/INTEROP/PersContainers(category='P',id='sap.ushell.services.Notifications')?$expand=PersContainerItems&sap-cache-id=00DE468A469579526F8D09A4E96A7D53", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Notifications", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata4/iwngw/notification/default/iwngw/notification_srv/0001/Notifications?$expand=Actions,NavigationTargetParams&$orderby=CreatedAt%20desc&$filter=IsGroupHeader%20eq%20false&$skip=0&$top=10", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Channels(ChannelId='SAP_SMP')", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata4/iwngw/notification/default/iwngw/notification_srv/0001/Channels(ChannelId='SAP_SMP')", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("$batch_4", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/UI2/FDM_PAGE_RUNTIME_SRV/$batch", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=multipart/mixed", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=multipart/mixed; boundary=batch_bd56-ff53-571c", 
		"Body=--batch_bd56-ff53-571c\r\nContent-Type: application/http\r\nContent-Transfer-Encoding: binary\r\n\r\nGET pageSet?$expand=sections%2Fviz%2CvizReferences%2FchipBags%2Fproperties%2CtileTypes%2FvizOptions%2FdisplayFormats%2Fsupported&$filter="
		"id%20eq%20%27SAP_LE_PG_INBOD%27%20or%20id%20eq%20%27SAP_PRC_PG_PURCHASING_OVR%27%20or%20id%20eq%20%27SAP_PRC_PG_REQ_PROCESSING%27%20or%20id%20eq%20%27SAP_PRC_PG_PO_PROCESSING%27%20or%20id%20eq%20%27SAP_PRC_PG_PUR_SUPPL_EVAL%27%20or%20id%20eq%20%27SAP_PRC_PG_RBTE_MNTN%27%20or%20id%20eq%20%27SAP_PRC_PG_STRAT_PURCHASING_OVR%27%20or%20id%20eq%20%27SAP_PRC_PG_PURCH_ANALYTICS%27 HTTP/1.1\r\nsap-cancel-on-close: true\r\nsap-language: EN\r\nsap-client: 100\r\nsap-contextid-accept: header\r\nAccept: "
		"application/json\r\nAccept-Language: EN\r\nDataServiceVersion: 2.0\r\nMaxDataServiceVersion: 2.0\r\nX-Requested-With: XMLHttpRequest\r\n\r\n\r\n\r\n--batch_bd56-ff53-571c--", 
		EXTRARES, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/components/shell/Search/Component-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/esh/search/ui/i18n.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/esh/search/ui/resources/resources_en.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/esh/search/ui/library-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/export/library-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/suite/ui/microchart/library-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/vk/library-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/components/shell/Settings/Component-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/export/messagebundle_en.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/suite/ui/microchart/messagebundle_en.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		LAST);

	web_url("Channels(ChannelId='SAP_SMP')_2", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata4/iwngw/notification/default/iwngw/notification_srv/0001/Channels(ChannelId='SAP_SMP')", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Channels(ChannelId='SAP_EMAIL')_2", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata4/iwngw/notification/default/iwngw/notification_srv/0001/Channels(ChannelId='SAP_EMAIL')", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/sap/bc/lrep/content/~20240305200716.1464500~/apps/nw.core.flp.appdiagnostics/app/sap/sui_flp_app_sup/manifest.appdescr?sap-language=EN&sap-client=100", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/comp/library-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/opu/odata/sap/sui_flp_app_sup_srv/$metadata?sap-client=100&sap-value-list=none&sap-language=EN&sap-context-token=20230303165809", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		LAST);

	web_url("NotificationTypePersonalizationSet_2", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata4/iwngw/notification/default/iwngw/notification_srv/0001/NotificationTypePersonalizationSet", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/mdc/library-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		LAST);

	web_url("INSIGHTS_CARDS", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata4/ui2/insights_srv/srvd/ui2/insights_cards_read_srv/0001/INSIGHTS_CARDS?$filter=visibility%20eq%20true&$select=descriptorContent,visibility,rank&$orderby=rank&$skip=0&$top=10", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/vbm/library-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/mdc/messagebundle_en.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/renderer/resources/resources.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/export/themes/sap_horizon/library.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/vbm/themes/sap_horizon/library.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/suite/ui/microchart/themes/sap_horizon/library.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/esh/search/ui/themes/sap_horizon/library.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/vk/themes/sap_horizon/library.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/comp/messagebundle_en.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/sap/sui_flp_app_sup/~5E539174B86CBE2303C46A8EC199ECC9~5/Component-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		LAST);

	web_url("PersContainers(category='U',id='ushellSearchPersoServiceContainer')", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/UI2/INTEROP/PersContainers(category='U',id='ushellSearchPersoServiceContainer')?$expand=PersContainerItems", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/mdc/messagebundle.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/comp/themes/sap_horizon/library.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/mdc/themes/sap_horizon/library.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/suite/ui/commons/collaboration/flpplugins/msplugin/Component.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		LAST);

	web_url("allCatalogs", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/UI2/PAGE_BUILDER_PERS/Pages('%2FUI2%2FFLPNoActionChip')/allCatalogs?$expand=Chips/ChipBags/ChipProperties&$orderby=title&$filter=type%20eq%20%27CATALOG_PAGE%27%20or%20type%20eq%20%27H%27%20or%20type%20eq%20%27SM_CATALOG%27%20or%20type%20eq%20%27REMOTE%27&sap-cache-id=0BA89C2247861EDEBDCDD0741FA49C0F", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("ServerInfos", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/sap/ESH_SEARCH_SRV/ServerInfos?$expand=Services/Capabilities", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		EXTRARES, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/suite/ui/commons/collaboration/ServiceContainer.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/suite/ui/commons/collaboration/BaseHelperService.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/suite/ui/commons/collaboration/TeamsHelperService.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/suite/ui/commons/collaboration/CollaborationHelper.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/suite/ui/commons/collaboration/ContactHelper.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/suite/ui/commons/collaboration/GraphApiConfig.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/suite/ui/commons/thirdparty/msal-browser.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		LAST);

	web_url("manifest.json_6", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/suite/ui/commons/manifest.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=messagebundle_en.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=collaboration/CollaborationCardHelper.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=windowmessages/CollaborationMessageBroker.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/opu/odata/sap/ESH_SEARCH_SRV/$metadata", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		LAST);

	web_url("applauncher.chip.xml", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/ui2/ushell/~E71FBEB692ABFDFACE833CCBA52F911B~C/chips/applauncher.chip.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);

	web_url("BlankTileChip.xml", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/ssuite/smartbusiness/tiles/blank/BlankTileChip.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		LAST);

	web_url("applauncher_dynamic.chip.xml", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/ui2/ushell/~E71FBEB692ABFDFACE833CCBA52F911B~C/chips/applauncher_dynamic.chip.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		LAST);

	web_url("NumericTileChip.xml", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/ssuite/smartbusiness/tiles/numeric/NumericTileChip.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DualTileChip.xml", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/ssuite/smartbusiness/tiles/dual/DualTileChip.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DeviationTileChip.xml", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/ssuite/smartbusiness/tiles/deviation/DeviationTileChip.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ContributionTileChip.xml", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/ssuite/smartbusiness/tiles/contribution/ContributionTileChip.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ComparisonTileChip.xml", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/ssuite/smartbusiness/tiles/comparison/ComparisonTileChip.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("DataSources", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/sap/ESH_SEARCH_SRV/DataSources?$expand=Annotations,Attributes/UIAreas,Attributes/Annotations&$filter=Type%20eq%20%27View%27%20and%20IsInternal%20eq%20false", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		EXTRARES, 
		"Url=/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/ssuite/smartbusiness/tiles/numeric/manifest.json?sap-language=EN&sap-client=100", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/ssuite/smartbusiness/tiles/blank/manifest.json?sap-language=EN&sap-client=100", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/ssuite/smartbusiness/tiles/dual/manifest.json?sap-language=EN&sap-client=100", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/ssuite/smartbusiness/tiles/contribution/manifest.json?sap-language=EN&sap-client=100", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/ssuite/smartbusiness/tiles/deviation/manifest.json?sap-language=EN&sap-client=100", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/ssuite/smartbusiness/tiles/comparison/manifest.json?sap-language=EN&sap-client=100", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/ssuite/smartbusiness/tiles/dual/Component-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/ssuite/smartbusiness/tiles/blank/Component-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		LAST);

	web_custom_request("PersonalizedSearchMainSwitches", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/sap/ESH_SEARCH_SRV/PersonalizedSearchMainSwitches?$filter=Selected%20eq%20true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		EXTRARES, 
		"Url=/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/ssuite/smartbusiness/tiles/numeric/Component-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/ssuite/smartbusiness/tiles/deviation/Component-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/sap/ssbtileslibs1/~8AE5C33DA9332E27A216E8CDDEB3C49B~5/Util.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/ssuite/smartbusiness/tiles/comparison/Component-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/ssuite/smartbusiness/tiles/contribution/Component-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/sap/ssbtileslibs1/~8AE5C33DA9332E27A216E8CDDEB3C49B~5/TileLoadManager.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/sap/ssbtileslibs1/~8AE5C33DA9332E27A216E8CDDEB3C49B~5/AnnotationHelper.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/sap/ssbtileslibs1/~8AE5C33DA9332E27A216E8CDDEB3C49B~5/TileNavigation.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/sap/ssbtileslibs1/~8AE5C33DA9332E27A216E8CDDEB3C49B~5/RequestManager.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/sap/ssbtileslibs1/~8AE5C33DA9332E27A216E8CDDEB3C49B~5/AppStateManager.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/sap/ssbtileslibs1/~8AE5C33DA9332E27A216E8CDDEB3C49B~5/DualTileTimeStampControl.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/sap/ssbtileslibs1/~8AE5C33DA9332E27A216E8CDDEB3C49B~5/Wrapper.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/css/style.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		LAST);

	web_custom_request("Users('%3Ccurrent%3E')", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/sap/ESH_SEARCH_SRV/Users('%3Ccurrent%3E')", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/sap/bc/ui5_ui5/sap/ssbtileslibs1/~8AE5C33DA9332E27A216E8CDDEB3C49B~5/TimeStampControl.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		LAST);

	web_custom_request("PersonalizedSearchMainSwitches_2", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/sap/ESH_SEARCH_SRV/PersonalizedSearchMainSwitches?$filter=Selected%20eq%20true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		LAST);

	web_url("PersContainers(category='U',id='web_assistant')", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/UI2/INTEROP/PersContainers(category='U',id='web_assistant')?$expand=PersContainerItems", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("Users('%3Ccurrent%3E')_2", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/sap/ESH_SEARCH_SRV/Users('%3Ccurrent%3E')", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-CSRF-Token",
		"{x-csrf-token}");

	web_custom_request("PersContainers", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/UI2/INTEROP/PersContainers", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"__metadata\":{\"id\":\"https://SAP-HANA.MFDEMOPORTAL.COM:44300/sap/opu/odata/UI2/INTEROP/PersContainers(id='web_assistant',category='U')\",\"uri\":\"https://SAP-HANA.MFDEMOPORTAL.COM:44300/sap/opu/odata/UI2/INTEROP/PersContainers(id='web_assistant',category='U')\",\"type\":\"INTEROP.PersContainer\"},\"id\":\"web_assistant\",\"category\":\"U\",\"validity\":0,\"clientExpirationTime\":\"\\/Date(253373472000000)\\/\",\"component\":\"\",\"appName\":\"\",\"PersContainerItems\":[{\"value\":\"\\\""
		"{\\\\\\\"SAP_webassistant_page\\\\\\\":\\\\\\\"{\\\\\\\\\\\\\\\"wn\\\\\\\\\\\\\\\":[],\\\\\\\\\\\\\\\"anl\\\\\\\\\\\\\\\":[\\\\\\\\\\\\\\\"SAP_S4HANA_ON-PREMISE#2021.001##Shell-home#1509266309\\\\\\\\\\\\\\\",\\\\\\\\\\\\\\\"SAP_S4HANA_ON-PREMISE#2021.001##Shell-home#1509266644\\\\\\\\\\\\\\\",\\\\\\\\\\\\\\\"SAP_S4HANA_ON-PREMISE#2021.002##Shell-home#1550138868\\\\\\\\\\\\\\\",\\\\\\\\\\\\\\\"SAP_S4HANA_ON-PREMISE#2022.000##Shell-home#1614694898\\\\\\\\\\\\\\\",\\\\\\\\\\\\\\\""
		"SAP_S4HANA_ON-PREMISE#2022.001##Shell-home#1695766253\\\\\\\\\\\\\\\",\\\\\\\\\\\\\\\"SAP_S4HANA_ON-PREMISE#2022.002##Shell-home#1764253093\\\\\\\\\\\\\\\",\\\\\\\\\\\\\\\"SAP_S4HANA_ON-PREMISE#2023.000##Shell-home#1853611670\\\\\\\\\\\\\\\",\\\\\\\\\\\\\\\"SAP_S4HANA_ON-PREMISE#2023.001##Shell-home#2010706534\\\\\\\\\\\\\\\",\\\\\\\\\\\\\\\"SAP_S4HANA_ON-PREMISE#2023.002##Shell-home#2216992478\\\\\\\\\\\\\\\",\\\\\\\\\\\\\\\"SAP_S4HANA_ON-PREMISE#2023.003##Shell-home#2322964687\\\\\\\\\\\\\\\"]}"
		"\\\\\\\",\\\\\\\"sap-cmp-test\\\\\\\":\\\\\\\"__6KZPNO023JBO700J4ANKDK3F\\\\\\\",\\\\\\\"SAP_webassistant_quicktour_S4\\\\\\\":1}\\\"\",\"id\":\"web_assistant\",\"category\":\"I\",\"containerId\":\"web_assistant\",\"containerCategory\":\"U\"}]}", 
		EXTRARES, 
		"Url=/sap/bc/lrep/content/~20240305200357.5993160~/apps/fin.central.user.defaultparameter/app/sap/fin_acc_userpar/manifest.appdescr?sap-language=EN&sap-client=100", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/sap/fin_acc_userpar/~B2728FF42CB2BC52081034022B378433~5/Component-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/public/icmandir/its/ls/theming/Base/baseLib/sap_horizon/svg/libs/SAPGUI-icons.svg", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		LAST);

	web_custom_request("PersContainers_2", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/UI2/INTEROP/PersContainers", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"__metadata\":{\"id\":\"https://SAP-HANA.MFDEMOPORTAL.COM:44300/sap/opu/odata/UI2/INTEROP/PersContainers(id='sap.ushell.UserDefaultParameter',category='P')\",\"uri\":\"https://SAP-HANA.MFDEMOPORTAL.COM:44300/sap/opu/odata/UI2/INTEROP/PersContainers(id='sap.ushell.UserDefaultParameter',category='P')\",\"type\":\"INTEROP.PersContainer\"},\"id\":\"sap.ushell.UserDefaultParameter\",\"category\":\"P\",\"validity\":0,\"clientExpirationTime\":\"\\/Date(253373472000000)\\/\",\"component\":\"\",\""
		"appName\":\"\",\"PersContainerItems\":[{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"AccountAssignmentCategory\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:47 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"AccountingDocument\",\"category\":\"I\",\"containerId\":\""
		"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"AccountingDocumentType\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"AccrualObject\",\"category\":\"I\",\""
		"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"AccrualSubobject\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"ActivityType\",\"category\":\"I"
		"\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"AllocationActualPlanVariant\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\""
		"AllocationCycleStartDate\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"AllocationPostingType\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal "
		"Time)\\\"}}\",\"id\":\"AllocationType\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"AssetClass\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)"
		"\\\"}}\",\"id\":\"BillToParty\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"BudgetPeriod\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}"
		"\",\"id\":\"BusinessArea\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"BusinessProcess\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\""
		",\"id\":\"ChartOfAccounts\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"CommitmentItem\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"value\\\":\\\"1710\\\",\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 "
		"(Pacific Daylight Time)\\\"}}\",\"id\":\"CompanyCode\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"value\\\":\\\"A000\\\",\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"ControllingArea\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Oct 13 2022"
		" 09:55:50 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"ControllingValuationType\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"CostCenter\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023"
		" 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"CostCenterGroup\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"CostCenterHierarchy\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Mon "
		"Mar 20 2023 18:13:20 GMT+0100 (Central European Standard Time)\\\"}}\",\"id\":\"CostElement\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Mon Mar 20 2023 18:13:20 GMT+0100 (Central European Standard Time)\\\"}}\",\"id\":\"CostObject\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\"
		"\"Thu Mar 17 2022 13:05:52 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"Country\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:47 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"CreditMemoRequestType\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\"
		"\"Fri Mar 18 2022 09:07:03 GMT+0100 (Central European Standard Time)\\\"}}\",\"id\":\"CreditSegment\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"Customer\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\""
		"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"CustomerGroup\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Oct 13 2022 09:55:50 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"CustomerReturnType\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"value\\\":\\\"USD\\\",\\\"_shellData\\\":"
		"{\\\"storeDate\\\":\\\"Tue Mar 15 2022 11:29:15 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"DisplayCurrency\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Tue Mar 15 2022 11:29:15 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"DistributionChannel\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":"
		"{\\\"storeDate\\\":\\\"Tue Mar 15 2022 11:29:15 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"Division\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Mon Nov 20 2023 05:53:57 GMT+0200 (Eastern European Standard Time)\\\"}}\",\"id\":\"Document\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\""
		"storeDate\\\":\\\"Thu Mar 17 2022 13:09:41 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"DocumentCurrency\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"value\\\":\\\"M\\\",\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Tue Mar 15 2022 11:30:00 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"ExchangeRateType\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\""
		"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"FinancialAccrualTransacType\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"FinancialManagementArea\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\""
		"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"FinancialStatementVariant\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:47 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"FiscalPeriod\",\"category\":\"I\",\"containerId\":\""
		"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"value\\\":\\\"2022\\\",\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"FiscalYear\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"value\\\":\\\"0000000\\\",\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\""
		"FiscalYearPeriod\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"FixedAsset\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\""
		"FunctionalArea\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"Fund\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\""
		"FundedProgram\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"GLAccount\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Fri Mar 18 2022 09:07:03 GMT+0100 (Central European Standard Time)\\\"}}\",\"id\":\""
		"GLAccountGroup\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"GLAccountHierarchy\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:47 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\""
		":\"GLAccountLineItemIsAccrual\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"GrantID\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Oct 13 2022 09:55:50 GMT-0700 (Pacific Daylight Time)\\\"}}\",\""
		"id\":\"Group\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"HouseBank\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\""
		"HouseBankAccount\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Mon Oct 24 2022 09:28:58 GMT+0200 (Central European Summer Time)\\\"}}\",\"id\":\"InternalOrder\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Mon Mar 20 2023 18:13:20 GMT+0100 (Central European Standard Time)\\\"}}"
		"\",\"id\":\"IsPeriodBasedBalanceReporting\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Mon Nov 20 2023 05:53:57 GMT+0200 (Eastern European Standard Time)\\\"}}\",\"id\":\"Item\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Fri Mar 18 2022 09:07:02 GMT+0100 (Central European "
		"Standard Time)\\\"}}\",\"id\":\"JournalEntry\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"Ledger\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"value\\\":\\\"2022\\\",\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 "
		"GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"LedgerFiscalYear\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Mon Mar 20 2023 18:13:20 GMT+0100 (Central European Standard Time)\\\"}}\",\"id\":\"LedgerGroup\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Fri Mar 01 2024 08:14"
		":17 GMT-0800 (Pacific Standard Time)\\\"}}\",\"id\":\"MainWorkCenter\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Fri Mar 01 2024 08:14:17 GMT-0800 (Pacific Standard Time)\\\"}}\",\"id\":\"MainWorkCenterPlant\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Fri Mar 01 2024 08:14"
		":26 GMT-0800 (Pacific Standard Time)\\\"}}\",\"id\":\"MaintenancePlanningPlant\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"MasterFixedAsset\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17"
		" 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"Material\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"MaterialGroup\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06"
		":45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"MaterialType\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"OperatingConcern\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"value\\\":\\\"OR\\\",\\\"_shellData\\\":{\\\"storeDate\\\":\\\""
		"Mon Oct 24 2022 09:28:58 GMT+0200 (Central European Summer Time)\\\"}}\",\"id\":\"OrderType\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Oct 13 2022 08:25:43 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"Payer\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 "
		"2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"PayerParty\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"PlanningCategory\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11"
		":06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"Plant\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:47 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"PostingDate\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 "
		"GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"ProfitCenter\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"ProfitCenterHierarchy\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Fri Mar 18 2022 09:07"
		":03 GMT+0100 (Central European Standard Time)\\\"}}\",\"id\":\"Project\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"PurchasingGroup\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45"
		" GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"PurchasingOrganization\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Oct 13 2022 09:55:50 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"SalesContractType\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Fri Mar 18 2022 09"
		":07:02 GMT+0100 (Central European Standard Time)\\\"}}\",\"id\":\"SalesDocument\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Fri Mar 18 2022 09:07:03 GMT+0100 (Central European Standard Time)\\\"}}\",\"id\":\"SalesDocumentType\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Tue "
		"Mar 15 2022 11:29:15 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"SalesGroup\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Tue Mar 15 2022 11:29:15 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"SalesOffice\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 "
		"11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"SalesOrder\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Tue Mar 15 2022 11:30:15 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"SalesOrderType\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"value\\\":\\\"1710\\\",\\\"_shellData\\\":{\\\"storeDate\\\":\\"
		"\"Tue Mar 15 2022 11:29:15 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"SalesOrganization\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"Segment\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Mon Nov "
		"20 2023 05:53:57 GMT+0200 (Eastern European Standard Time)\\\"}}\",\"id\":\"ServiceContract\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Mon Oct 24 2022 09:28:58 GMT+0200 (Central European Summer Time)\\\"}}\",\"id\":\"ServiceOrderType\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\""
		":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"ShipToParty\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Oct 13 2022 08:25:43 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"ShippedToParty\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"value\\\":\\\"1710\\\",\\\"_shellData\\\":"
		"{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"ShippingPoint\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Fri Mar 01 2024 08:14:17 GMT-0800 (Pacific Standard Time)\\\"}}\",\"id\":\"SoldProduct\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\""
		"storeDate\\\":\\\"Wed Oct 18 2023 18:07:47 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"SoldProductGroup\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Tue Mar 15 2022 11:30:14 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"SoldToParty\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\""
		"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"StorageLocation\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"Supplier\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\""
		"storeDate\\\":\\\"Fri Mar 18 2022 09:07:03 GMT+0100 (Central European Standard Time)\\\"}}\",\"id\":\"TaxIsCalculatedAutomatically\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Fri Mar 18 2022 09:07:03 GMT+0100 (Central European Standard Time)\\\"}}\",\"id\":\"WBSElement\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\""
		"{\\\"value\\\":\\\"1710\\\",\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Fri Mar 18 2022 09:07:03 GMT+0100 (Central European Standard Time)\\\"}}\",\"id\":\"Warehouse\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu May 08 2025 22:23:51 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"SoldProduct \",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\""
		"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu May 08 2025 22:23:51 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"SoldProductGroup \",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"}]}", 
		LAST);

/* Added by Async CodeGen.
ID=Poll_0
ScanType = Recording

The following URLs are considered part of this conversation:
	https://sap-hana.mfdemoportal.com:44300/sap/opu/odata4/iwngw/notification/default/iwngw/notification_srv/0001/Notifications/$count

TODO - The following callbacks have been added to AsyncCallbacks.c.
Add your code to the callback implementations as necessary.
	Poll_0_RequestCB
	Poll_0_ResponseCB
 */
	web_reg_async_attributes("ID=Poll_0", 
		"Pattern=Poll", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata4/iwngw/notification/default/iwngw/notification_srv/0001/Notifications/$count", 
		"PollIntervalMs=59900", 
		"RequestCB=Poll_0_RequestCB", 
		"ResponseCB=Poll_0_ResponseCB", 
		LAST);

/* Added by Async CodeGen.
ID=Poll_1
ScanType = Recording

The following URLs are considered part of this conversation:
	https://sap-hana.mfdemoportal.com:44300/sap/opu/odata4/iwngw/notification/default/iwngw/notification_srv/0001/GetBadgeNumber()

TODO - The following callbacks have been added to AsyncCallbacks.c.
Add your code to the callback implementations as necessary.
	Poll_1_RequestCB
	Poll_1_ResponseCB
 */
	web_reg_async_attributes("ID=Poll_1", 
		"Pattern=Poll", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata4/iwngw/notification/default/iwngw/notification_srv/0001/GetBadgeNumber()", 
		"PollIntervalMs=60000", 
		"RequestCB=Poll_1_RequestCB", 
		"ResponseCB=Poll_1_ResponseCB", 
		LAST);

	web_url("GetBadgeNumber()_2", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata4/iwngw/notification/default/iwngw/notification_srv/0001/GetBadgeNumber()", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=Notifications/$count", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM, 
		LAST);

/* Added by Async CodeGen.
ID=Poll_2
ScanType = Recording

The following URLs are considered part of this conversation:
	https://sap-hana.mfdemoportal.com:44300/sap/opu/odata4/iwngw/notification/default/iwngw/notification_srv/0001/Notifications?$expand=Actions,NavigationTargetParams&$orderby=CreatedAt%20desc&$filter=IsGroupHeader%20eq%20false&$skip=0&$top=10

TODO - The following callbacks have been added to AsyncCallbacks.c.
Add your code to the callback implementations as necessary.
	Poll_2_RequestCB
	Poll_2_ResponseCB
 */
	web_reg_async_attributes("ID=Poll_2", 
		"Pattern=Poll", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata4/iwngw/notification/default/iwngw/notification_srv/0001/Notifications?$expand=Actions,NavigationTargetParams&$orderby=CreatedAt%20desc&$filter=IsGroupHeader%20eq%20false&$skip=0&$top=10", 
		"PollIntervalMs=59900", 
		"RequestCB=Poll_2_RequestCB", 
		"ResponseCB=Poll_2_ResponseCB", 
		LAST);

	web_url("Notifications_2", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata4/iwngw/notification/default/iwngw/notification_srv/0001/Notifications?$expand=Actions,NavigationTargetParams&$orderby=CreatedAt%20desc&$filter=IsGroupHeader%20eq%20false&$skip=0&$top=10", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("flp;sap-fesr-only", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp;sap-fesr-only", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded;charset=utf-8", 
		"Body=sap-fesr-only=1&SAP-Perf-FESRec=B73B05A165F146F5A30AA6B71AC21D81,4541D867614245178FCBE6610D793E61,12695,18006,9868,118,undetermined_startup_0,242,34954,win_10,SAP_UI5SAP-Perf-FESRec-optF6252,FLPCUSTOMHOME@F6252,,cr_136,96913,1498161,,,0,X,,,,,0,1,2,,20250509052332784,ux.eng.s4producthomes1", 
		LAST);

lr_end_transaction("S4HANA-SAP Web-S01-02 Log On",LR_AUTO);

	lr_think_time(10);
	

/*Correlation comment: Automatic rules - Do not change!  
Original value='cz1TSUQlM2FBTk9OJTNhc2FwLWhhbmFfUzRIXzAwJTNhd0lFRHdRcGFUWnRpeFlDRjMyQ3NRN2pqb0J5anVnN1k2M3J3TkxIVC1BVFQ=' 
Name ='webguiform_url' 
Type ='Rule' 
AppName ='SAP_NWBC' 
RuleName ='webguiform_url'*/
	web_reg_save_param_ex(
		"ParamName=webguiform_url",
		"LB/IC=\"/sap(",
		"RB/IC=)/",
		SEARCH_FILTERS,
		"Scope=Body",
		"RequestUrl=*/webgui;~sysid=S4H;~service=3200*",
		LAST);
		
lr_start_transaction("S4HANA-SAP Web-S01-03 Enter Tcode in Apps (VA03)");

/*Correlation comment - Do not change!  Original value='0B2DA5BA1D124E0D' Name ='moin' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=moin",
		"RegExp==\\ \"(.*?)\";//]]",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/webgui;~sysid=S4H;~service=3200*",
		LAST);

	web_submit_data("webgui;~sysid=S4H;~service=3200", 
		"Action=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=sap-flp-params", "Value={\"sap-flp-url\":\"https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN#SalesDocument-display?sap-ui-tech-hint=GUI\",\"system-alias\":\"S4SD\"}", ENDITEM, 
		"Name=~transaction", "Value=VA03", ENDITEM, 
		"Name=sap-client", "Value=100", ENDITEM, 
		"Name=sap-language", "Value=EN", ENDITEM, 
		"Name=~nosplash", "Value=1", ENDITEM, 
		"Name=sap-ie", "Value=edge", ENDITEM, 
		"Name=sap-theme", "Value=sap_horizon", ENDITEM, 
		"Name=sap-touch", "Value=0", ENDITEM, 
		"Name=sap-target-navmode", "Value=inplace", ENDITEM, 
		"Name=sap-keepclientsession", "Value=2", ENDITEM, 
		"Name=sap-ushell-timeout", "Value=0", ENDITEM, 
		"Name=sap-shell", "Value=FLP1.120.0", ENDITEM, 
		EXTRARES, 
		"Url=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/texts/messagebundle_en.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", ENDITEM, 
		"Url=/sap/public/icmandir/its/ls/theming/Base/baseLib/sap_horizon/fonts/SAP-icons.woff2", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/public/icmandir/its/ls/theming/UR/c2/sap_horizon/standards.css", ENDITEM, 
		"Url=/sap/public/icmandir/its/ls/theming/Base/baseLib/baseTheme/fonts/72-SemiboldDuplex.woff2", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/public/icmandir/its/ls/theming/UR/c2/sap_horizon/standards.css", ENDITEM, 
		"Url=/sap/public/icmandir/its/ls/theming/Base/baseLib/baseTheme/fonts/72-Regular.woff2", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/public/icmandir/its/ls/theming/UR/c2/sap_horizon/standards.css", ENDITEM, 
		"Url=/sap/public/icmandir/its/ls/theming/Base/baseLib/baseTheme/fonts/72Mono-Regular.woff2", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/public/icmandir/its/ls/theming/UR/c2/sap_horizon/standards.css", ENDITEM, 
		"Url=/sap/public/icmandir/its/ls/theming/Base/baseLib/baseTheme/fonts/72-Bold.woff2", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/public/icmandir/its/ls/theming/UR/c2/sap_horizon/standards.css", ENDITEM, 
		LAST);
		
	web_reg_find("Fail=NotFound",
		"Search=Body",
		"Text=Display Sales Orders - VA03",
		LAST);

	web_url("PersContainers(category='U',id='sap.ushell.services.UserRecents')", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/UI2/INTEROP/PersContainers(category='U',id='sap.ushell.services.UserRecents')?$expand=PersContainerItems", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/dbg/version.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", ENDITEM, 
		"Url=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/ToolbarOverflowDelegate.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", ENDITEM, 
		"Url=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/ToolbarOverflowMenuDecorator.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", ENDITEM, 
		"Url=/sap/public/icmandir/its/~cache-793051-375ae433/lsgui/js/texts/messagebundle_en.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", ENDITEM, 
		LAST);

	web_custom_request("ur",
		"URL=https://sap-hana.mfdemoportal.com:44300/sap({webguiform_url})/bc/gui/sap/its/webgui/state/ur",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI",
		"Snapshot=t59.inf",
		"Mode=HTML",
		"Body=moin={moin}&~RG_WEBGUI=X&sap-statistics=true&~path=/sap({webguiform_url})/bc/gui/sap/its/webgui&ClientWidth=1920&ClientHeight=987&ScreenOrientation=landscape&ThemedLayoutPaddingTop=16&ThemedLayoutPaddingBottom=16&ThemedLayoutPaddingLeft=48&ThemedLayoutPaddingRight=48&ThemedTableRowHeightStandard=33&ThemedScrollbarDimension=15&ThemedDocumentBackgroundColor=rgb(245, 246, 247)&ThemedSvgLibs=https%3A%2F%2Fsap-hana.mfdemoportal.com%3A44300%2Fsap%2Fpublic%2Ficmandir%2Fits%2Fls%2Ftheming%2FBase%2FbaseLib%2Fsap_horizon%2Fsvg%2Flibs%2FSAPGUI-icons.svg&ThemedRasterHeight=32&ThemedRasterWidth=10&ThemedAbapListRasterHeight=27&ThemedAbapListRasterWidth=8&sapthemecat=3&ThemeID=sap_horizon&SapThemeID=sap_horizon&DeviceType=DESKTOP&Platform=Windows&ThemedTableRowHeight=25&flpUrl=https%253a%252f%252fsap-hana.mfdemoportal.com%253a44300%252fsap%252fbc%252fui2%252fflp%253fsap-client%253d100%2526sap-language%253dEN%2523SalesDocument-display%253fsap-ui-tech-hint%253dGUI&sapurisfioritheme=1&theme=sap_horizon&sapbasetheme=sap_"
		"horizon&ThemedValueHelpWidth=1080&ThemedValueHelpHeight=700&~webguiScreenWidth=1920&~webguiScreenHeight=987&~webguiUserAreaWidth=1824&~webguiUserAreaHeight=883&~ci_result=ClientWidth=1920;ClientHeight=987;ScreenOrientation=landscape;ThemedLayoutPaddingTop=16;ThemedLayoutPaddingBottom=16;ThemedLayoutPaddingLeft=48;ThemedLayoutPaddingRight=48;ThemedTableRowHeightStandard=33;ThemedScrollbarDimension=15;ThemedDocumentBackgroundColor=rgb(245, 246, 247);ThemedSvgLibs=https%3A%2F%2Fsap-hana.mfdemoportal.com%3A44300%2Fsap%2Fpublic%2Ficmandir%2Fits%2Fls%2Ftheming%2FBase%2FbaseLib%2Fsap_horizon%2Fsvg%2Flibs%2FSAPGUI-icons.svg;ThemedRasterHeight=32;ThemedRasterWidth=10;ThemedAbapListRasterHeight=27;ThemedAbapListRasterWidth=8;sapthemecat=3;ThemeID=sap_horizon;SapThemeID=sap_horizon;DeviceType=DESKTOP;Platform=Windows;ThemedTableRowHeight=25;flpUrl=https%253a%252f%252fsap-hana.mfdemoportal.com%253a44300%252fsap%252fbc%252fui2%252fflp%253fsap-client%253d100%2526sap-language%253dEN%2523SalesDocument-display%253fsap-ui-te"
		"ch-hint%253dGUI;sapurisfioritheme=1;theme=sap_horizon;sapbasetheme=sap_horizon;ThemedValueHelpWidth=1080;ThemedValueHelpHeight=700;~webguiScreenWidth=1920;~webguiScreenHeight=987;~webguiUserAreaWidth=1824;~webguiUserAreaHeight=883",
		LAST);

	web_custom_request("PersContainers_3", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/UI2/INTEROP/PersContainers", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		body_variable_1, 
		EXTRARES, 
		"Url=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/UI5WebComponent.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", ENDITEM, 
		"Url=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/PageLayoutPanel.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", ENDITEM, 
		"Url=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/ToolbarFieldNavigationDelegate.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", ENDITEM, 
		"Url=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/FeatureFlagsRenderer.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", ENDITEM, 
		"Url=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/InputFieldRenderer.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", ENDITEM, 
		"Url=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/UrBaseRenderer.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", ENDITEM, 
		"Url=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/common/lib/less.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", ENDITEM, 
		"Url=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/DragDelegate.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", ENDITEM, 
		"Url=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/ClientInterfaces.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", ENDITEM, 
		LAST);

	web_custom_request("PersContainers_4", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/UI2/INTEROP/PersContainers", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		body_variable_2, 
		EXTRARES, 
		"Url=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/DropDelegate.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", ENDITEM, 
		"Url=/sap/bc/personas3/core/script/sap/personas/fw/its/init.js?~cache-793051-375ae433", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", ENDITEM, 
		"Url=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/SplitterBase.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", ENDITEM, 
		"Url=/sap/bc/personas3/core/script/sap/personas/Client.js?1746768336739", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", ENDITEM, 
		"Url=/sap/bc/personas3/core/resources/version.js?1746768336912", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", ENDITEM, 
		"Url=/sap/bc/personas3/core/script/sap/personas/style/StyleHandler.js?20231116083056", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", ENDITEM, 
		"Url=/sap/bc/personas3/core/resources/generated/themes/personas/slim.css?20231116083056", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", ENDITEM, 
		LAST);

	web_custom_request("flp;sap-fesr-only_2", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp;sap-fesr-only", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded;charset=utf-8", 
		"Body=sap-fesr-only=1&SAP-Perf-FESRec=B73B05A165F146F5A30AA6B71AC21D81,F03E846088914419AAB11E6C6B35C4E4,0,0,7,0,searchFieldInShell-input_liveChange_1,0,0,win_10,SAP_UI5SAP-Perf-FESRec-optF6252,ell-input_liveChange,,cr_136,0,0,,,7,X,,,,,0,2,2,,20250509052525329,sap.ushell.renderer&SAP-Perf-FESRec=B73B05A165F146F5A30AA6B71AC21D81,,0,0,180,0,eldInShell-input-popup-table_itemPress_2,0,0,win_10,SAP_UI5SAP-Perf-FESRec-optVA03 (TR),APPSTART@CUSTOMHOME,,cr_136,0,0,,,180,X,,,,,0,2,2,,20250509052531739,"
		"sap.ushell.renderer", 
		LAST);

	web_submit_data("webgui;~sysid=S4H;~service=3200_2", 
		"Action=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its;sap-fesr-only/webgui;~sysid=S4H;~service=3200", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=sap-fesr-only", "Value=1", ENDITEM, 
		"Name=SAP-Perf-FESRec", "Value=6995CD6743CB44B48FA27D59F0D5F73E,66EF5F457A81EBCE8B23F52DD9000000,820,1383,4151,2,VA03_start_1st_0,826,1383,win_10,SAP_ITSSAP-Perf-FESRec-optVA03,VA03_start_1st,,cr_136,0,0,,,1948,X,,,,,,1,2,,20250509052531909,VA03", ENDITEM, 
		LAST);

lr_end_transaction("S4HANA-SAP Web-S01-03 Enter Tcode in Apps (VA03)",LR_AUTO);

	lr_think_time(10);
	
	
	web_reg_find("Fail=NotFound",
		"Search=Body",
		"Text=status\":\"OK\"",
		LAST);
	
	web_add_auto_header("moin",
		"{moin}");

lr_start_transaction("S4HANA-SAP Web-S01-04 Search Order");

	web_custom_request("json",
		"URL=https://sap-hana.mfdemoportal.com:44300/sap({webguiform_url})/bc/gui/sap/its/webgui/batch/json?~RG_WEBGUI=X&sap-statistics=true",
		"Method=POST",
		"Resource=0",
		"RecContentType=multipart/mixed",
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI",
		"Snapshot=t70.inf",
		"Mode=HTML",
		"EncType=application/json;charset=UTF-8",
		"Body=[{\"post\":\"focus/wnd[0]/usr/ctxtVBAK-VBELN\",\"logic\":\"ignore\"},{\"post\":\"typeahead/send\",\"content\":\"%_SEARCH 40\",\"logic\":\"ignore\"},{\"get\":\"typeahead/get\",\"logic\":\"inverse\"},{\"get\":\"state/ur\"}]",
		EXTRARES,
		"URL=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/Listbox_JsonSuggest.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", ENDITEM,
		"URL=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/Listbox_JsonPopup.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", ENDITEM,
		"URL=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/Listbox_Popup.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", ENDITEM,
		"URL=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/Listbox_Items.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", ENDITEM,
		"URL=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/Listbox_ActiveInteractionDelegate.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", ENDITEM,
		"URL=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/Listbox_InteractionDelegate.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", ENDITEM,
		"URL=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/Listbox_HoverInteractionDelegate.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", ENDITEM,
		"URL=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/Listbox_TruncationDelegate.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", ENDITEM,
		"URL=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/Listbox_Suggest.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", ENDITEM,
		"URL=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/Listbox_JsonItems.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", ENDITEM,
		"URL=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/Listbox_JsonModel.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", ENDITEM,
		"URL=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/Listbox_ActionItems.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", ENDITEM,
		"URL=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/Listbox_ActionItem.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", ENDITEM,
		LAST);

	web_custom_request("json_2",
		"URL=https://sap-hana.mfdemoportal.com:44300/sap({webguiform_url})/bc/gui/sap/its/webgui/batch/json?~RG_WEBGUI=X&sap-statistics=true",
		"Method=POST",
		"Resource=0",
		"RecContentType=multipart/mixed",
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI",
		"Snapshot=t71.inf",
		"Mode=HTML",
		"EncType=application/json;charset=UTF-8",
		"Body=[{\"post\":\"value/wnd[0]/usr/ctxtVBAK-VBELN\",\"content\":\"{orderNumber}\",\"logic\":\"ignore\"}]",
		LAST);
 
 	web_reg_find("Fail=NotFound",
		"Search=Body",
		"Text=Display Standard Order {orderNumber}",
		LAST);

	web_custom_request("json_3",
		"URL=https://sap-hana.mfdemoportal.com:44300/sap({webguiform_url})/bc/gui/sap/its/webgui/batch/json?~RG_WEBGUI=X&sap-statistics=true",
		"Method=POST",
		"Resource=0",
		"RecContentType=multipart/mixed",
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI",
		"Snapshot=t72.inf",
		"Mode=HTML",
		"EncType=application/json;charset=UTF-8",
		"Body=[{\"content\":\"{orderNumber}\",\"post\":\"value/wnd[0]/usr/ctxtVBAK-VBELN\"},{\"post\":\"focus/wnd[0]/usr/ctxtVBAK-VBELN\",\"logic\":\"ignore\"},{\"post\":\"action/304/wnd[0]/usr/ctxtVBAK-VBELN\",\"content\":\"position=4\",\"logic\":\"ignore\"},{\"post\":\"action/3/wnd[0]/usr/btnBT_SUCH\"},{\"get\":\"state/ur\"}]",
		EXTRARES,
		"URL=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/TabstripDelegate_standards.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", ENDITEM,
		"URL=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/img/1x1.gif", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", ENDITEM,
		"URL=/sap/opu/odata4/iwngw/notification/default/iwngw/notification_srv/0001/Notifications/$count", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", ENDITEM,
		LAST);

	web_submit_data("webgui;~sysid=S4H;~service=3200_3",
		"Action=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its;sap-fesr-only/webgui;~sysid=S4H;~service=3200",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI",
		"Snapshot=t75.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=sap-fesr-only","Value=1",ENDITEM,
		"Name=SAP-Perf-FESRec","Value=6995CD6743CB44B48FA27D59F0D5F73E,66EF5F457A81EBCE8B23F52DD9000006,0,1218,1751,1,wnd[0]/usr/btnBT_SUCH_Press_1,174,1218,win_10,SAP_ITSSAP-Perf-FESRec-optVA03,usr/btnBT_SUCH_Press,,cr_136,745,56640,,,533,X,,,,,,2,2,,20250509052816404,VA03",ENDITEM,
		LAST);


	web_stop_async("ID=Poll_1", 
		LAST);

	web_stop_async("ID=Poll_2", 
		LAST);

	web_stop_async("ID=Poll_0", 
		LAST);

lr_end_transaction("S4HANA-SAP Web-S01-04 Search Order",LR_AUTO);

	lr_think_time(10);


lr_start_transaction("S4HANA-SAP Web-S01-05 Sign Out");

	web_url("allCatalogs_2", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/UI2/PAGE_BUILDER_PERS/Pages('unused')/allCatalogs?$filter=type%20eq%20%27H%27%20or%20type%20eq%20%27REMOTE%27", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Text=SAP NetWeaver Application Server", 
		LAST);

	web_submit_data("webgui",
		"Action=https://sap-hana.mfdemoportal.com:44300/sap({webguiform_url})/bc/gui/sap/its/webgui/?moin={moin}&sap-sessioncmd=CANCEL2",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI",
		"Snapshot=t83.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=moin", "Value={moin}", ENDITEM,
		"Name=sap-sessioncmd", "Value=CANCEL2", ENDITEM,
		LAST);

	web_reg_find("Text=Logon", 
		LAST);

	web_url("logoff", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/public/bc/icf/logoff?sap-client=100", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t84.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("flp;sap-fesr-only_3", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp;sap-fesr-only", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded;charset=utf-8", 
		"Body=sap-fesr-only=1&SAP-Perf-FESRec=B73B05A165F146F5A30AA6B71AC21D81,E94D9B60DF0C4914A5A73B1B50404679,0,0,18,0,userActionsMenuHeaderButton_press_3,0,0,win_10,SAP_UI5SAP-Perf-FESRec-optVA03 (TR),nuHeaderButton_press,,cr_136,0,0,,,18,X,,,,,0,2,2,,20250509053226529,sap.ushell.renderer&SAP-Perf-FESRec=B73B05A165F146F5A30AA6B71AC21D81,,0,0,2,0,__list2-6-logoutBtn_press_4,0,0,win_10,SAP_UI5SAP-Perf-FESRec-optVA03 (TR),t2-6-logoutBtn_press,,cr_136,0,0,,,2,X,,,,,0,2,2,,20250509053227814,undetermined&"
		"SAP-Perf-FESRec=B73B05A165F146F5A30AA6B71AC21D81,D712222577BC43CA94375070797AEBB0,5,220,539,1,__mbox-btn-0_press_5,114,220,win_10,SAP_UI5SAP-Perf-FESRec-optVA03 (TR),__mbox-btn-0_press,,cr_136,656,434,,,314,X,,,,,0,2,2,,20250509053231953,undetermined", 
		LAST);

lr_end_transaction("S4HANA-SAP Web-S01-05 Sign Out",LR_AUTO);

	lr_think_time(10);

	return 0;
}