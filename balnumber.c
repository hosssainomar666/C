#include<stdio.h>

int toHexa(int,char[]);
int main()
{
    char hexa [50],n,i;

    printf("Enter the number to convert = ");
    scanf("%d",&n);
    toHexa(n,hexa);
    return 0;
}
int toHexa(int n,char hexa[])
{
    int remainder, i,quotient = n,j=0;
    while(quotient!=0)
    {
        remainder = quotient %16;

    if(remainder<10)
    {
        hexa[j++]=48+remainder;
    }
    else
    {
        hexa[j++]=55+remainder;
    }
    quotient = quotient /16;
    }
 printf("\n Hexadecimal of the given number is = ");
 for(i=j;i>=0;i--){
    printf("%c",hexa[i]);
 }
}

