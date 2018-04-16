#include <stdio.h>
#define LIMIT 50

int main()
{
  int age;
  printf("Hello, please enter your age!\n");
  scanf("%d", &age);
  if (age < LIMIT)
  {
    printf("Your age is %d.\n", age);
    printf("Quite young, I say.\n");
  }
  else if (age == LIMIT)
  {
    printf("You say your age is %d.\n", age);
    printf("Almost there.\n");
  }
  else
  {
    printf("So your age is %d, huh?\n", age);
    printf("Geezer.\n");
  }

  return 0;
}