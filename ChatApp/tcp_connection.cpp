// tcp_connection.cpp
#include "tcp_connection.hpp"
#include <boost/bind/bind.hpp>  // Use this instead of <boost/bind.hpp>
using namespace boost::placeholders;  // Bring in _1, _2, etc.

// If you want to implement make_daytime_string() as a member function:
std::string tcp_connection::make_daytime_string()
{
    // Just a stub function for demonstration.
    return "Hello, world!";
}

void tcp_connection::start()
{
    message_ = make_daytime_string();

    boost::asio::async_write(socket_,
        boost::asio::buffer(message_),
        std::bind(&tcp_connection::handle_write, shared_from_this(),
            std::placeholders::_1,
            std::placeholders::_2));
}

void tcp_connection::handle_write(const boost::system::error_code& error,
    std::size_t bytes_transferred)
{
    if (!error)
    {
        // Write operation succeeded.
    }
    else
    {
        // Handle the error.
    }
}
