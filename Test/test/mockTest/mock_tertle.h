#include "Turtle.h"
#include <gmock/gmock.h> // Brings in gMock.

// Here MockTurtle we have defined it as mock to test Painter.
// The mocked version of Turtle allows us to not look at the turtle
// implementation but just check .h

class MockTurtle : public Turtle {
public:
  MOCK_METHOD(void, PenUp, (), (override));
  MOCK_METHOD(void, PenDown, (), (override));
  MOCK_METHOD(void, Forward, (int distance), (override));
  MOCK_METHOD(void, Turn, (int degrees), (override));
  MOCK_METHOD(void, GoTo, (int x, int y), (override));
  MOCK_METHOD(int, GetX, (), (const, override));
  MOCK_METHOD(int, GetY, (), (const, override));
};