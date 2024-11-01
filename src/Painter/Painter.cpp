#include "Painter.h"
Painter::Painter(Turtle *turtle) : value(turtle) {}

bool Painter::DrawCircle() {
  value->PenDown();
  return true;
}