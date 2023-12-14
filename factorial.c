#include <stdio.h>

int main()
{
  int n, fact = 1, i;

  printf("Enter the no ");
  scanf("%d", &n);

  for(i=1; i<=n; i++)
  {
    fact = fact * i;
  }

  printf("The factorial = %d", fact);
  
  return 0;
}