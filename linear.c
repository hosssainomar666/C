#include<stdio.h>
int main()
{
int num[]={12,4,5,6,76,4,6,8};
int value,i,pos=-1;
printf("Enter value that you want to search:");
scanf("%d",&value);
for(i=0;i<8;i++)
{
    if(value==num[i])
    {
        pos=i+1;
        break;
    }

}
if(pos ==-1)
{
    printf("Item is not found");

}
else{
    printf("The value is found at %d position",pos);
}
}