#include<stdio.h>
#include <stdio.h>

int main() {
    float basic_pay, da, hra, gross_salary;
    printf("Enter basic pay: ");
    scanf("%f", &basic_pay);
    if (basic_pay <= 25000) {
        da = 0.1 * basic_pay;
        hra = 0.15 * basic_pay;
    } else if (basic_pay <= 40000) {
        da = 0.12 * basic_pay;
        hra = 0.18 * basic_pay;
    } else {
        da = 0.15 * basic_pay;
        hra = 0.2 * basic_pay;
    }
    gross_salary = basic_pay + da + hra;
    printf("Gross salary = %.2f", gross_salary);
    return 0;
}
