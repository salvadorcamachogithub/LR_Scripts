Action()
{
	// For setting it up with SV server, change the Service Address URL under SAO Tools >  Manage Services > Description
	
	web_reg_find("Fail=NotFound",
		"Search=Body",
		"Text=GetFlightsResult",
		LAST);
	
lr_start_transaction("Flight-Web Services SOAP-S01-01 Get Flight");

	web_service_call( "StepName=GetFlights_102",
		"SOAPMethod=Flights_Service|FlightsServiceMethods|GetFlights",
		"ResponseParam=response",
		"Service=Flights_Service",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1699436746.inf",
		BEGIN_ARGUMENTS,
		"DepartureCity={City}",
		"ArrivalCity={City}",
		"FlightDate=11/9/2025",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);
		
lr_end_transaction("Flight-Web Services SOAP-S01-01 Get Flight", LR_AUTO);

	lr_think_time(10);
	
	web_reg_find("Fail=NotFound",
		"Search=Body",
		"Text=GetFlightsResult",
		LAST);
	
lr_start_transaction("Flight-Web Services SOAP-S01-02 Get Flight");

	web_service_call( "StepName=GetFlights_102",
		"SOAPMethod=Flights_Service|FlightsServiceMethods|GetFlights",
		"ResponseParam=response",
		"Service=Flights_Service",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1699436746.inf",
		BEGIN_ARGUMENTS,
		"DepartureCity={City}",
		"ArrivalCity={City}",
		"FlightDate=11/9/2025",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);
	
lr_end_transaction("Flight-Web Services SOAP-S01-02 Get Flight", LR_AUTO);
	                  
	lr_think_time(10);
	
	
	web_reg_find("Fail=NotFound",
		"Search=Body",
		"Text=CreateFlightOrder",
		LAST);

lr_start_transaction("Flight-Web Services SOAP-S01-03 Create Flight");

	web_service_call( "StepName=CreateFlightOrder_101",
		"SOAPMethod=Flights_Service|FlightsServiceMethods|CreateFlightOrder",
		"ResponseParam=response",
		"Service=Flights_Service",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1699442714.inf",
		BEGIN_ARGUMENTS,
		"xml:FlightOrder="
			"<FlightOrder>"
				"<Class>First</Class>"
				"<CustomerName>John Doe</CustomerName>"
				"<DepartureDate>11/09/2025</DepartureDate>"
				"<FlightNumber>11148</FlightNumber>"
				"<NumberOfTickets>1</NumberOfTickets>"
			"</FlightOrder>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

lr_end_transaction("Flight-Web Services SOAP-S01-03 Create Flight", LR_AUTO);

	lr_think_time(10);

	
	return 0;
}
