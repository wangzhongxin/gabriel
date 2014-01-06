/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *      _____       ___   _____   _____    _   _____   _               *
 *     /  ___|     /   | |  _  \ |  _  \  | | | ____| | |              *
 *     | |        / /| | | |_| | | |_| |  | | | |__   | |              *
 *     | |  _    / / | | |  _  { |  _  /  | | |  __|  | |              *
 *     | |_| |  / /  | | | |_| | | | \ \  | | | |___  | |___           *
 *     \_____/ /_/   |_| |_____/ |_|  \_\ |_| |_____| |_____|          *
 *                                                                     *
 *     gabriel is an angel from the Holy Bible, this engine is named   *
 *   gabriel, means bringing people good news. the goal of gabriel     *
 *   server engine is to help people to develop various online games,  *
 *   welcome you to join in.                                           *
 *                                                                     *
 *   @author: lichuan                                                  *
 *   @qq: 308831759                                                    *
 *   @email: 308831759@qq.com                                          *
 *   @site: www.lichuan.me                                             *
 *   @github: https://github.com/lichuan/gabriel                       *
 *   @date: 2013-12-15 23:21:42                                        *
 *                                                                     *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "ace/SOCK_Acceptor.h"
#include "gabriel/base/client_connection.hpp"
#include "gabriel/base/acceptor.hpp"
#include "gabriel/base/server.hpp"

namespace gabriel {
namespace base {

Client_Connection::Client_Connection()
{
}

Client_Connection::~Client_Connection()
{
}

int Client_Connection::open(void *acceptor_or_connector)
{
    typedef Gabriel_Acceptor<Client_Connection, ACE_SOCK_ACCEPTOR> Acceptor;
    Acceptor *acceptor = static_cast<Acceptor*>(acceptor_or_connector);
    m_holder = acceptor->holder();

    if(!m_holder->verify_connection(this))
    {
        return -1;
    }
    
    int open_ret = Connection::open(acceptor_or_connector);

    if(open_ret >= 0) //success
    {
        m_holder->add_client_connection(this);
    }

    return open_ret;
}

}
}
