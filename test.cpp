#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest, CS) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1]= "COMPUTER"; test_val[2] = "SCIENCE";
    EXPECT_EQ("COMPUTER SCIENCE", echo(3,test_val));
}

TEST(EchoTest, Dollars) {
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "$$$";
    EXPECT_EQ("$$$", echo(2,test_val));
}

TEST(EchoTest, Marvel) {
    char* test_val[6]; test_val[0] = "./c-echo"; test_val[1] = "Iron"; test_val[2] = "Man"; test_val[3] = "beats"; test_val[4] = "Captain"; test_val[5] = "America";
    EXPECT_EQ("Iron Man beats Captain America", echo(6,test_val));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
