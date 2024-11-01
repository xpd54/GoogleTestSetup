#include "Painter.h"
#include "mock_tertle.h"
#include <gtest/gtest.h>
using ::testing::AtLeast;
TEST(PainterTest, CanDrawSomething) {
  MockTurtle turtle;             // #2
  EXPECT_CALL(turtle, PenDown()) // #3
      .Times(AtLeast(1));
  Painter painter(&turtle);          // #4
  EXPECT_TRUE(painter.DrawCircle()); // #5
}