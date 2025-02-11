#include <string>
#include <sqlite3.h>
class Database {


public:
	



private:
	const std::string DBADDRESS= "";    // PUT DATABASE ADDRESS HERE 
	sqlite3* db;



	Database()
	{
		if (!db)
		//
		// Constructor  
		// 

		//
		//Read From File To Recall Past Messages 
		//

		//
		// Update Database With Past Messages.
		//

	}


	~Database()
	{
		sqlite3_close(db);
		//
		// Destructor 
		// 	

	}


	//
	// Add Messages To Existing User/Client
	// 

	//
	// Add new user
	//

	//
	// Get Stored Messages
	// Public 

	//
	// Get Previously Stored UserName
	//

}