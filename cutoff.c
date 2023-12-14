//A program to display maximum and minimum
#include<stdio.h>
int main(){
   int num [100],n,i;
   printf("How many numbers:");
   scanf("%d",&n);
   for (i=0;i<n;i++)
  {
    scanf("%d",&num[i]);
  }
//printing maximum number
int max = num[0];
for (i=1;i<n;i++)
{
    if(max < num[i])
    {
    max = num[i];
    }
}
   printf("\nMaximum is %d",max);
 //Printing minimum number
 int min = num[0];
 for(i=1;i<n;i++)
 {
   if(min<num[i])
    {
      printf("\nMinumum is %d",min);
    }
 }
}
