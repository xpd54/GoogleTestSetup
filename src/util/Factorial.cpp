#include "Factorial.h"
uint32_t factorial(uint32_t number) {
  if (!number) {
    return 1;
  }
  return number * factorial(number - 1);
}