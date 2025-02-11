#include <boost/asio.hpp>
#include <boost/bind.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/enable_shared_from_this.hpp>


//https://www.boost.org/doc/libs/1_76_0/doc/html/boost_asio/overview.html               Sitemap docs
//https://www.boost.org/doc/libs/1_76_0/doc/html/boost_asio/using.html                  macros  docs
//https://www.boost.org/doc/libs/1_76_0/doc/html/boost_asio/tutorial/tutdaytime3.html   ayscnc  docs
//


class TCP{



	public:
		bool TCPRun = 0;



	private:
		const unsigned int PORT = 8080;
		const unsigned int BUFFER_SIZE = 1024;
		boost::asio::io_context io_context;



	TCP()
	{ 
	
		//
		// Constructor  
		// 

	}


	~TCP()
	{ 

		//
		// Destructor 
		// 	

	}


		//
		// start listening on a specific port
		// 

		//
		// asynchronous from main loop, keep loop going to accept new connections 
		//

		//
		// Public Method for sending message back to original sender 
		// 



}