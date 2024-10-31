#include "Stack.h"

void Stack::push(const int num) { holding.push_back(num); }
void Stack::pop() {
  if (holding.size()) {
    holding.pop_back();
  }
}
int Stack::top() const {
  if (holding.size()) {
    return holding.back();
  } else {
    // If empty return something
    return -9999;
  }
}

bool Stack::empty() const { return holding.empty(); }