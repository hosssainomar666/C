#include<stdio.h>
int main(){
    int num[] = {12,67,10,20,30,40,50};
    int value,pos=-1,i;
    printf("Enter the value you want to search:");
    scanf("%d",&value);
    for(i=0;i<8;i++)
    {
if(value == num[i])
{
    pos = i + 1;
    break;

}
    }
    if (pos == -1)
    {
        printf("Not found\n");
    }
    else{
printf("The value is found at %d position",pos);
    }


}
