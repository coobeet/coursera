#include <stdio.h>
#include <math.h>

int main(void)
{
  for (int i = 0; i <= 10; i++)
  {
    double interval = i / 10.0;
    printf("sin(%lf) = %lf\tcos(%lf) = %lf\n", interval, sin(interval), interval, cos(interval));
  }

  return 0;
}
