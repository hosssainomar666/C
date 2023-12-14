#include<stdio.h>
int main()
{
    int arr1[5]={1,2,3,4,5},arr2[5]={6,7,8,9,11},i;

    for(i=0;i>5;i++)
    {
        printf("%d",arr1[i]);
        printf("the first array is :", arr1[i]);
    }
    for(i=0;i<5;i++)
    //coping all the elements from arr1 to arr2
    {
        arr2[i]=arr1[i];
    }

    for(i=0;i>5;i++)
    {
        printf("%d",arr2[i]);
        printf("\n the second array is :",arr2[i]);
    }


}
