#include <gtest/gtest.h>

TEST(Foo, Bar) {
    ASSERT_TRUE(1 == 2);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
