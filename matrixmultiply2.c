#include<stdio.h>
int main(){
    int first[10][10],second[10][10],result[10][10],r1,r2,c1,c2,i,j,k;
    printf("Enter rows and column for the first matrix:");
    scanf("%d%d", &r1, &c1);

     printf("Enter rows and column for the second matrix:");
    scanf("%d%d", &r2, &c2);

    while(c1 !=r2)
    {
        printf("Error!! Column of first matrix is nor equal to the row of second matrix  ");
          printf("enter rows and column for the first matrix:");
    scanf("%d%d", &r1, &r2);

     printf("enter rows and column for the second matrix:");
    scanf("%d%d", &r1, &r2);
    }
//first martix inputs
printf("\nEnter elements for first matrix");
for(i=0;i<r1;i++)
{
   printf("first[%d] = ",i,j);
   for(j=0;j<c1;j++)
   scanf("%d",&first[i][j]);
   printf("\n");
}
//second martix inputs
printf("\nEnter elements for second matrix\n:");
for(i=0;i<r2;i++)
{
   printf("first[%d][%d] = ",i,j);
   for(j=0;j<c2;j++)
   scanf("%d",&second[i][j]);
   printf("\n");
}
//printing first matrix
printf("First matrix:\n");
for(i=0;i<r1;i++)
{
    printf("\t");
    for(j=0;j<c1;j++)
    {
        printf("%d",first[i][j]);

    }
}
//printing second matrix
printf("second matrix:\n");
for(i=0;i<r2;i++)
{
    printf("\t");
    for(j=0;j<c2;j++)
    {
        printf("%d",second[i][j]);

    }
}

}

