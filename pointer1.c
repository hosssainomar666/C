#include <stdio.h>

int square(int *num) {
  return *num * *num;
}

int main() {
  int number;
  printf("Enter a number:");
  scanf("%d", &number);
  int square_of_number = square(&number);

  printf("The square of %d is %d\n", number, square_of_number);

  return 0;
}
