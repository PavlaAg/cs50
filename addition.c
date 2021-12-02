#include <stdio.h>
#include "libcs50/src/cs50.h"

int main() {
  long x = get_long("x: ");
  long y = get_long("y: ");
  long z = x + y;
  printf("Result: %li\n", z);
  return 0;
}
