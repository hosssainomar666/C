#include <stdio.h>

void decimalToOctal(int decimalNum);

int main()
{
    int decimalNum;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    printf("The octal equivalent of %d is ", decimalNum);
    decimalToOctal(decimalNum);

    return 0;
}

void decimalToOctal(int decimalNum)
{
    int octalNum = 0, i = 1;

    while (decimalNum != 0)
    {
        octalNum += (decimalNum % 8) * i;
        decimalNum /= 8;
        i *= 10;
    }

    printf("%d", octalNum);
}
