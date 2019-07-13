#include <stdio.h>
int main(void)
{
  int num; // signed integer

  for (;;) {
    scanf("%d", &num); // read the number from the keyboard

    if (num <= 0) {
      break;
    }

    for (int i = 0; i < num; i++) {
      printf("%d\n", i);
    }
  }

  printf("All done!\n");
  return 0;
}
