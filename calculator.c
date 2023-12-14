#include<stdio.h>
int main()
{
    int a,b,ch;
    char c;
    printf("Enter your Choice:\n");
    printf("\n.add\n.substract\n.multiply\n.divide")
    scanf("%d",&ch);
    switch(ch)
    {
    case 01:
    printf("Enter two numbers");
    scanf("%d%d", &a, &b);
    printf("output:%d",(a+b));
    break;
    case 02:
    printf("Enter two numbers");
    scanf("%d%d", &a, &b);
    printf("putput:%d",(a-b));
    break;
    case 03:
    printf("Enter two numbers");
    scanf("%d%d", &a, &b);
    printf("output:%d",(a*b));
    break;
    case 04:
    printf("Enter two numbers");
    scanf("%d%d", &a, &b);
    printf("output:%d",(a/b));
    break;
    default:
    printf("Invalid Input\n");
    }
return 0;
}
