#ifndef CLIENT_H
#define CLIENT_H

namespace ns {

class Interface;

class Client {
public:
    Client(Interface *interface);

    bool some_method();

private:
    Interface *interface_;
};

}

#endif  // CLIENT_H
