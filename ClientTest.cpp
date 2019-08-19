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

unsigned int factorial(unsigned int n) {
    return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

TEST(FactorialTests, HandlesZeroInput) {
    EXPECT_EQ(factorial(0), 1);
}

TEST(FactorialTest, HandlesPositiveInput) {
    EXPECT_EQ(factorial(1), 1);
    EXPECT_EQ(factorial(2), 2);
    EXPECT_EQ(factorial(3), 6);
    EXPECT_EQ(factorial(8), 40320);
}
