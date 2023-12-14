#include<stdio.h>
int main(){
    int a[5],sum=0,i;
    a[0]=10;
    a[1]=20;
    a[2]=30;
    a[3]=40;
    a[4]=50;
    for(i=0;i<5;i++){
        sum = sum +a[i];

    }
    printf("The sum is %d",sum);
    return 0;
}