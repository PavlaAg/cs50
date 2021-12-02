#include <stdio.h>
#include "libcs50/src/cs50.h"

/*
*
*/
int main() {
  float x = get_float("x: ");
  float y = get_float("y: ");
  float z = x / y;
  printf("Result: %f\n", z);
  return 0;
}
