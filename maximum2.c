//a program to display maximum and minimum
#include<stdio.h>
int main()
{
   int num [100],n,i;
   printf("How many numbers:");
   scanf("%d",&n);
   printf("The numbers are:");
   for (i=0;i<n;i++)
  {
    scanf("%d",&num[i]);
  }
int max = num[0];
for (i=1;i<n;i++)
{
    if(max < num[i])
    {
    max = num[i];
}
}
   printf("Maximum is %d",max);
   printf("\n");
int min = num[0];
for(i=0;i<n;i++)
{

}
   return 0;
}
