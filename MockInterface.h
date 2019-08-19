#ifndef MOCKINTERFACE_H
#define MOCKINTERFACE_H

#include "Interface.h"

#include <gmock/gmock.h>

namespace ns::testing {

class MockImplementation : public Interface {
public:
    MOCK_METHOD0(do_something, bool());
};

}

#endif  // MOCKINTERFACE_H
