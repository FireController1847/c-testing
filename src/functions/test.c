#include <stdio.h>

int main() {
  float first, second;
  printf("Please enter the first number: ");
  scanf("%F", &first);
  printf("Please enter the second number: ");
  scanf("%F", &second);

  double add(double a, double b) {
    return a + b;
  }

  printf("The result of the addition is %F\n", add(first, second));
}