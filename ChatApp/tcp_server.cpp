#include <iostream>
#include <functional>
#include <boost/asio.hpp>
#include <boost/bind.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/enable_shared_from_this.hpp>
#include "tcp_connection.hpp"


class tcp_server
{
public:

    tcp_server(boost::asio::io_context& io_context)
        : io_context_(io_context),
        acceptor_(io_context, boost::asio::ip::tcp::endpoint(boost::asio::ip::tcp::v4(), 13))
    {
        start_accept();
    }

private:


    void start_accept()
    {
        tcp_connection::pointer new_connection = tcp_connection::create(io_context_);

        acceptor_.async_accept(new_connection->socket(),
            std::bind(&tcp_server::handle_accept, this, new_connection,
                boost::asio::placeholders::error));
    }

    void handle_accept(tcp_connection::pointer new_connection,
        const boost::system::error_code& error)
    {
        if (!error)
        {
            new_connection->start();
        }

        start_accept();
    }

    boost::asio::io_context& io_context_;  // Reference to the io_context passed in
    boost::asio::ip::tcp::acceptor acceptor_;


};

