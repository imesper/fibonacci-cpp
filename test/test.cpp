
#include <gtest/gtest.h>
#include <iostream>
#include <fibonacci.hpp>

using namespace std;

TEST(Finbonacci, Odd)
{

    Fibonacci f1(1);
    Fibonacci f5(5);
    Fibonacci f7(7);
    Fibonacci f13(13);

    EXPECT_EQ(1, f1.getResult());
    EXPECT_EQ(5, f5.getResult());
    EXPECT_EQ(13, f7.getResult());
    EXPECT_EQ(233, f13.getResult());
}

TEST(Finbonacci, Even)
{
    Fibonacci f0(0);
    Fibonacci f2(2);
    Fibonacci f4(4);
    Fibonacci f6(6);
    Fibonacci f8(8);
    Fibonacci f18(18);

    EXPECT_EQ(0, f0.getResult());
    EXPECT_EQ(1, f2.getResult());
    EXPECT_EQ(3, f4.getResult());
    EXPECT_EQ(8, f6.getResult());
    EXPECT_EQ(21, f8.getResult());
    EXPECT_EQ(2584, f18.getResult());
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
