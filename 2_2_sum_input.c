#include <stdio.h>

int main(void)
{
  int num, result = 0, i;

  scanf("%d", &num); // read the number from the keyboard

  for(i = 0; i <= num; i++) { // compute the result
    result += i;
  }

  printf("%d\n", result); // output result

  return 0;
}
