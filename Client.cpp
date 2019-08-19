#include "Client.h"
#include "Interface.h"

namespace ns {

Client::Client(Interface *interface)
: interface_{interface} {
}

bool Client::some_method() {
    return interface_->do_something();
}

}