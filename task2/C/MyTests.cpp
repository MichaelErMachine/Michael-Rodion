#include "main.h"
#include <gtest/gtest.h>

TEST(MyTests, test1) 
{
    ASSERT_FALSE(less(2,1));
    for(int i = 1; i < 100; ++i) {
        ASSERT_TRUE(less(0, 1));
    }
}


TEST(MyTests, test2) 
{
    ASSERT_EQ(1, factorial(0));
    ASSERT_EQ(120, factorial(5));
}
