#include<stdio.h>
int main()
{
    float da,basicpay,hra,grosspay;
    printf("Enter your basic pay:\n");
    scanf("%f",&basicpay);
    if(basicpay<=25000)
    {
        da = basicpay * 0.1;
        hra = basicpay * 0.15;
    }
    else if (basicpay<=40000){
        da = basicpay * 0.12;
        hra = basicpay * 0.18;
    }
    else{
        da = basicpay * 0.15;
        hra = basicpay * 0.2;
    }
    grosspay = (basicpay+da+hra);
    printf("Gross salary is %.2f",grosspay);
    return 0;
}
