// tcp_connection.hpp
#ifndef TCP_CONNECTION_HPP
#define TCP_CONNECTION_HPP

#include <iostream>
#include <string>
#include <boost/asio.hpp>
#include <memory>

// Forward declaration of a global make_daytime_string() if needed:
// std::string make_daytime_string();

class tcp_connection : public std::enable_shared_from_this<tcp_connection>
{
public:
    typedef std::shared_ptr<tcp_connection> pointer;

    static pointer create(boost::asio::io_context& io_context)
    {
        return pointer(new tcp_connection(io_context));
    }

    boost::asio::ip::tcp::socket& socket()
    {
        return socket_;
    }

    void start();  // Declaration

private:
    tcp_connection(boost::asio::io_context& io_context)
        : socket_(io_context)
    {
    }

    void handle_write(const boost::system::error_code& error,
        std::size_t bytes_transferred);

    // You can implement make_daytime_string() here inline or declare it and define it in the .cpp.
    std::string make_daytime_string();

    boost::asio::ip::tcp::socket socket_;
    std::string message_;
};

#endif // TCP_CONNECTION_HPP
