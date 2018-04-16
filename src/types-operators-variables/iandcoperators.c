#include <stdio.h>

// "I" in Incriment and "C" in Operators

int main()
{
  int x;
  int n = 10;
  int z;

  n++; /* n will be 11 now */
  ++n; /*ditto, prefix or postfix unimportant */

  x = n++; /* x will be 10 */
  z = ++n; /* z will be 11 */

  return 0;
}