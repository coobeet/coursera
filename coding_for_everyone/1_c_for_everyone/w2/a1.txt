#include <stdio.h>
#define PI 3.14159
int main(void)
{
  double radius;
  printf("Enter radius:");
  scanf("%le", &radius);
  printf("volume is : %le \n\n", 4 * radius * radius * radius * PI / 3);
  return 0;
}
