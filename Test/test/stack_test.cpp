#include "Stack.h"
#include <gtest/gtest.h>

class StackTest : public testing::Test {
protected:
  void SetUp() override { stack.push(0); }
  Stack stack;

  void TearDown() override {
    while (!stack.empty()) {
      stack.pop();
    }
  }
};

TEST_F(StackTest, push_value) {
  stack.push(20);
  EXPECT_EQ(stack.top(), 20);
  EXPECT_FALSE(stack.empty());
}

TEST_F(StackTest, pop_value) {
  stack.push(30);
  EXPECT_EQ(stack.top(), 30);
  stack.pop();
  EXPECT_NE(stack.top(), 30);
  EXPECT_FALSE(stack.empty());
}