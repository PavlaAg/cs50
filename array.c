#include <stdio.h>
#include "libcs50/src/cs50.h"

int main(void)
{
  int scorenumber = get_int ("number of scores: ");
  float result;
  int total = 0;
  int scores[scorenumber];
  for (int i = 0; i < scorenumber; i++)
  {
    scores[i] = get_int("Score: ");
    total = total + scores[i];
  }
  result = (float) total /(float) scorenumber;
  printf("Average: %f\n", result);
  return 0;
}
