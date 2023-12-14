#include <stdio.h>

int main()
{
  int a, b, c;

  // printf("Enter the 1st no.");
  // scanf("%d", &a);

  // printf("Enter the 2nd no.");
  // scanf("%d", &b);

  // printf("Enter the 3rd no.");
  // scanf("%d", &c);

  printf("Enter 1st, 2nd & 3rd no.");
  scanf("%d %d %d", &a, &b, &c);

  if(a>b && a>c)
  {
    printf("1st is greater number");
  }
  else if(b>c && b>a)
  {
    printf("2nd is greater number");
  }
  else if(c>a && c>b)
  {
    printf("3rd is greater number");
  }
  
  return 0;
}