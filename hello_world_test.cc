#include <gtest/gtest.h>

#include "hello_world.h"

TEST(HelloWorldTest, OutputHelloWorld) {
  EXPECT_EQ("Hello World!", hello_world());
}

GTEST_API_ int main(int argc, char **argv) {
  std::cout << "Running main() from hello_world.cc\n";

  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
