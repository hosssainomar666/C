#include<stdio.h>
#include<math.h>
int main()
{
float discriminent,a,b,c,root1,root2,imaginarypart,realpart;
printf("Enter the Co-efficients of the function a,b,c :");
scanf("%f%f%f",&a,&b,&c);
discriminent = (b*b) - (4*a*c);
if(discriminent>0)
{
  root1 = (-b+sqrt(discriminent))/2*a;
  root2 =(-b-sqrt(discriminent))/2*a;
  printf("Root as=re real and differnet\n");
  printf("Root1 is %.2f and root2 is %.2f",root1,root2);
}
else if(discriminent==0)
{
  root1 = root2 =-b/(2*a);
  printf("All the roots are real and same");
  printf("root1 = root2 = %.2f",root1);
}
else
{
realpart=-b/2*a;
imaginarypart=sqrt(-discriminent)/2*a;
printf("All roots are complex and differenet");
printf("Root1 = %.2f +%.2fi and root 2 = %.2f-%.2fi",realpart,imaginarypart,realpart,imaginarypart);

}
return 0;
}
