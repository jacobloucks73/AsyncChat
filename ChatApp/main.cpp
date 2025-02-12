#include <iostream>
#include <boost/asio.hpp>
#include <boost/bind.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/enable_shared_from_this.hpp>
#include "TCP.cpp"


int main(int argc, char* argv[]) {

    boost::asio::io_context io_context;
    TCP server(io_context);
    
    // 
    // run TCP server to start accepting new clients 
    //

    //
    // check for any new connections 
    //

    //
    // if wanted, display messages.
    // 

    //
    // store any recieved messages in database 
    // 

    //
    // 
    // 
    return 0; 
}