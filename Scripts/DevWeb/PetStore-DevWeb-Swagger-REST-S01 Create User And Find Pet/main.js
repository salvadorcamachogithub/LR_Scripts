/*

Updated: 04.2025
Script created by Salvador Camacho

This script was created with best practices, so it is more resilient, such as:
* Transaction naming
* No add cookies
* No third party
* One validation per transaction
* Think times at the end of each transaction to better simulate user behavior
* Main URL and users parametrized, Public AOS by default, credentials parametrized

This script uses a Swagger file from https://petstore.swagger.io/ to show how Swagger files can be used with DevWeb
The first transaction creates a new user, the second transaction finds pets by "available" status and extracts the ids from the response

Runtime Settings were set to log only on errors and generate snapshot on errors, think times 75% to 150%

This script has 5 transactions
PetStore-DevWeb-Swagger-REST-S01-01 Create User
PetStore-DevWeb-Swagger-REST-S01-02 Find Pet By Status

*/

const swaggerApi = require('./swaggerApi.js')();

load.initialize("Initialize", async function () {
});

load.action("Action", async function () {
            	
//    Data needed for creating a new user, preparing the data
            	
//    let webRequestCreateUser = swaggerApi.createUser(`{
//        "id": 1696319110901,
//        "username": "user-1696319110901",
//        "firstName": "user",
//        "lastName": "1696319110901",
//        "email": "user-1696319110901@my.org",
//        "password": "Welcome",
//        "phone": "9999-999-999",
//        "userStatus": 0
//      }`);
    
    let id = Date.now();
    let user =
    {
        "id": id,
        "username": `user-${id}`,
        "firstName": "user",
        "lastName": `${id}`,
        "email": `user-${id}@my.org`,
        "password": "Welcome",
        "phone": "9999-999-999",
        "userStatus": 0
    };
    
    // Setting up function
    let webRequestCreateUser = swaggerApi.createUser(user);
            	
const createUserTransaction = new load.Transaction("PetStore-DevWeb-Swagger-REST-S01-01 Create User");
createUserTransaction.start();
    
    // Actual request
    const webResponseCreateUser = await webRequestCreateUser.send();
   
createUserTransaction.stop();
load.thinkTime(10);

	
	// Setting up function
	let findPetsByStatus = swaggerApi.findPetsByStatus(`available`);
		
	// Setting up correlation to extract id
	findPetsByStatus.extractors.push(new load.JsonPathExtractor("id", '$.[?(@.id < 1000)].id', true));
            
const findPetByStatusTransaction = new load.Transaction("PetStore-DevWeb-Swagger-REST-S01-02 Find Pet By Status");
findPetByStatusTransaction.start();
        
    // Actual request
	const findPets = await findPetsByStatus.send();

findPetByStatusTransaction.stop();
load.thinkTime(10);

});

load.finalize("Finalize", async function () {
});
