#include<stdio.h>
int main(){
    int n,i,a,low,mid,high;
    printf("Enter the the number of elements :");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elemets in a sorted order :");
    for(i=0;i<n;i++);
    {
        scanf("%d",&array[i]);
    }
printf("Enter the value to find :");

scanf("%d",&a);
low =0;
high = n-1;
mid =(low + high)/2;
while(low <= high ){
    if (array[mid] <a){
        low =mid +1 ;
    }
else if{
    printf("%d found at the location %d .",a,mid+1);
    break;
}
else {
    high = mid -1 ;
    mid = (low +high)/2;
    
}
}

}