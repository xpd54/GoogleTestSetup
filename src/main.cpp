#include "Stack/Stack.h"
#include "util/Factorial.h"
#include <algorithm>
#include <iostream>
#include <vector>
int addAll(const std::vector<int> &input) {
  int sum = 0;
  std::for_each(input.begin(), input.end(), [&](int value) { sum += value; });
  return sum;
}
int main() {
  std::cout << addAll({1, 2, 3, 4, 5}) << std::endl;
  std::cout << factorial(5) << std::endl;
  Stack stack;
  stack.push(10);
  std::cout << "top is :-" << stack.top() << std::endl;
  return 0;
}