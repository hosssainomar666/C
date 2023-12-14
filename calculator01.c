#include<stdio.h>
int main()
{
 int ch,a,b;
 char c;

    printf("\nMenu \n1.Add\n2.substract\n3.Divide\n4.Multiply\n5.Modulus\n6.Square");
    printf("\nEnter your choice:");
    scanf("%d",ch);
    switch(ch)
    {
        case 1:
        printf("\n Enter two integer numbers:");
        scanf("%d%d",&a,&b);
        printf("\n output:%d",(a+b));
        break;
        case 2:
        printf("\n Enter two integer numbers:");
        scanf("%d%d",&a,&b);
        printf("\n output:%d",(a-b));
        break;
        case 3:
        printf("\n Enter two integer numbers:");
        scanf("%d%d",&a,&b);
        printf("\n Output:%d",(a*b));
        break;
        case 4:
        printf("\n Enter two integer numbers");
        scanf("%d%d",&a,&b);
        printf("\n Output : %d",(a/b));
        break;
        case 5:
        printf("\n Enter two integer numbers");
        scanf("%d%d",&a,&b);
        printf("\n Output :%d",(a%b));
        break;
        case 6:
        printf("\n Enter one number");
        scanf("%d",&a);
        printf("\n Output:%d",(a*a));
        break;
        default:
        printf("Invalid input\n");
    }

  printf("\n Thank you!!!!");

    return 0;

}
