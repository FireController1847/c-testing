#include <stdio.h>
/* this contains the definition of printf()*/
double add(double x, double y);

int main()
{
  float first, second;
  printf("Please enter the first number.\n");
  scanf("%F", &first);
  printf("Please enter the second number.\n");
  scanf("%F", &second);

  double add(double a, double b)
  {
    return a + b;
  }

  printf("The result of the addition is %F\n", add(first, second));

  return 0;
}