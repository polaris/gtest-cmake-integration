#ifndef INTERFACE_H
#define INTERFACE_H

namespace ns {

class Interface {
public:
    virtual ~Interface() {}
    virtual bool do_something() = 0;
};

}

#endif  // INTERFACE_H
