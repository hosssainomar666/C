#include<stdio.h>
int main()
{
float area,circumfernce,radius;
float pie = 3.14;
printf("Enter the radius :");
scanf("%f",&radius);


area = 2*radius*radius;
circumfernce = 2*pie*radius;

printf("\nThe circle's area is :%f",area);
printf("\nThe circle's circumference is: %f ",circumfernce);
return 0;
}
