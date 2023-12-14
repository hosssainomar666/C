#include<stdio.h>
int main()
{
  int A[10][10],transpose[10][10],i,j,row,col;
  printf("Enter the number of columns and row of the matrix:");
  scanf("%d%d", &col,&row);
  //getting the elements for the matrix
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
        printf("A[%d][%d]=",i,j);
        scanf("%d",A[i][j]);
    }
  }
//printing entered matrix
printf("\nEntered matrix :");
for(i=0;i<row;i++)
 {
    for(j=0;j<col;j++)
    {
        printf("A[%d][%d] = ",i,j);

    }
    printf("\n");

  }

}
