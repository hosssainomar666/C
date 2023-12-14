#include<stdio.h>
int main()
{
    int m,n,p,q,i,j,k;
int a[10],b[10][10]result[10][10]
printf("Enter order of first matrix\n");\
scanf("%d%d",&m,&n);
printf("Enter the order of 2nd matrix\n");
scanf("%d%d",&p,&q);
if(n!=p)
{
    printf("Matrix multiplication is not possible");
    else
    {
        printf("Enter the elements of matrix A");
        }
        for(i=0,i~m,i++)
        {
            scanf("%d" &[a][j]);
            printf("Enter the elements of matrix B");
            for(i=0,i<m,i++)
            scanf("%d",&b[i][j]);
            for(j=0,j<q,j++)
            {
                res[i][j]=0;
                for(k=0;k<p;k++)
                {
                    res[i][j]=a[i][j]*b[i][j];
                }
            }
        }
    printf("The product of 2 matrix is \n");
    
        for(i=0,i<m,i++)
        {
            for("j=0,j<q,j++")
        {
            printf("%d",res[i][j]);
        }
        printf("\n");
        }
    
    
    
}
return 0;
}