#include<stdio.h>
 void insertionSort(int n,int arr[],int t);
 {
    for(i=1;i<=n-1;i++){
        for(j=1;j<=i;j++){
            if(arr[j]>arr[j+1]){
               t = a[j];
                 a[j]=a[j-1];
                 a[j+1]= t;
        }
    }
 }
 }
int main(){
    int arr[]={50,23,89,46,78};
    int i,j,t;
    printf("Original array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    insertionSort(arr,n)
    printf("\nSorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0
}
 
 