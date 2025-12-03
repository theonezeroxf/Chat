//----------------------------------------------------------------------
#include <boost/asio.hpp>
#include "chat_room.h"

using boost::asio::ip::tcp;
class chat_server
{
public:
  chat_server(boost::asio::io_context& io_context,
      const tcp::endpoint& endpoint);

private:
  void do_accept();

  tcp::acceptor acceptor_;
  chat_room room_;
};
