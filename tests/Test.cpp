#include <gtest/gtest.h>
#include "../src/Testable.h"

TEST(GetTwoTest, Two) {
    EXPECT_EQ(2, GetTwo());
}

TEST(GetThreeTest, Two) {
    EXPECT_EQ(3, GetThree());
}