#include <gtest/gtest.h>
#include <gmock/gmock.h>

using ::testing::AtLeast;
using ::testing::Return;

class Interface {
public:
    virtual ~Interface() {}
    virtual bool do_something() = 0;
};

class MockImplementation : public Interface {
public:
    MockImplementation() {
        ON_CALL(*this, do_something()).WillByDefault(Return(false));
    } 
    MOCK_METHOD0(do_something, bool());
};

class Client {
public:
    Client(Interface *interface) : interface_{interface} {}

    bool some_method() {
        return interface_->do_something();
    }

private:
    Interface *interface_;
};

TEST(ClientTest, TestSomeMethod) {
    MockImplementation implementation;
    EXPECT_CALL(implementation, do_something()).Times(AtLeast(1));
    Client cut(&implementation);
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

int main(int argc, char **argv) {
    ::testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
}
