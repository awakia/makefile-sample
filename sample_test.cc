#include <iostream>

#include <gtest/gtest.h>

#include "sample.h"

using ns::Sample;

class SampleTest : public testing::Test {
 protected:
  virtual void SetUp() {
    str_ = "abc";
    num_ = 123;
  }
  std::string str_;
  int num_;
};

TEST_F(SampleTest, Test1) {
  Sample sample(str_, num_);
  EXPECT_EQ(str_, sample.str());
  EXPECT_EQ(num_, sample.num());
}

GTEST_API_ int main(int argc, char **argv) {
  std::cout << "Running main() from sample_test.cc\n";

  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
