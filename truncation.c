#include <stdio.h>
#include "libcs50/src/cs50.h"

/*
* In this program we will prove how using the wrong data type might cause unexpected results.
* In this case, we can see that if we divide two long (int) variables,
* the result will not contain decimals, because they were ignored in the division.
*/
int main() {
  long x = get_long("x: ");
  long y = get_long("y: ");
  long z = x / y;
  printf("Result: %li\n", z);
  return 0;
}
