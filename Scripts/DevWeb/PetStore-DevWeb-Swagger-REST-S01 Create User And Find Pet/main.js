// This script was generated and reflects raw data. It is recommended to change this code to your required logic

const swaggerApi = require('./swaggerApi.js')();

load.initialize("Initialize", async function () {
});

load.action("Action", async function () {
            	
const createUserTransaction = new load.Transaction("PetStore-DevWeb-Swagger-REST-S01-01 Create User");
createUserTransaction.start();
            	
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
    
    // Actual request
    const webResponseCreateUser = await webRequestCreateUser.send();
   
createUserTransaction.stop();
load.thinkTime(10);

            
const findPetByStatusTransaction = new load.Transaction("PetStore-DevWeb-Swagger-REST-S01-02 Find Pet By Status");
findPetByStatusTransaction.start();
	
	// Setting up function
	let findPetsByStatus = swaggerApi.findPetsByStatus(`available`);
		
	// Setting up correlation
	findPetsByStatus.extractors.push(new load.JsonPathExtractor("id", '$.[?(@.id < 1000)].id', true));
        
    // Actual request
	const findPets = await findPetsByStatus.send();

findPetByStatusTransaction.stop();
load.thinkTime(10);

});

load.finalize("Finalize", async function () {
});
