
#include <stdio.h>
#include <math.h>

int main(void)
{
  double value;
  printf("Enter a value between 0 and 1:");
  scanf("%lf", &value);
  printf("The sine of %lf is: %lf", value, sin(value));
  return 0;
}
