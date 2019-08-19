#include "Client.h"
#include "Interface.h"
#include "MockInterface.h"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

using ::testing::AtLeast;
using ::testing::Return;

TEST(ClientTest, TestSomeMethod) {
    ns::testing::MockImplementation implementation;
    ON_CALL(implementation, do_something()).WillByDefault(Return(false));
    EXPECT_CALL(implementation, do_something()).Times(AtLeast(1));
    ns::Client cut(&implementation);
    EXPECT_TRUE(cut.some_method()) << ">>>>>>>>>>> Here comes a custom failure message <<<<<<<<<<<";
}
