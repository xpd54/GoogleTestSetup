#pragma once
#include "../Turtle/Turtle.h"
class Painter {
public:
  Painter(Turtle *turtle);
  bool DrawCircle();

private:
  Turtle *value;
};