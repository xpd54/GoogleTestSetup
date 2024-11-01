#include <gtest/gtest.h>

TEST(SkipTest, failed_test) {
  GTEST_SKIP() << "This Test is getting skipped";
  FAIL();
}