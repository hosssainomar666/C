#include <stdio.h>

int decimalToBinary(int decimal);

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    printf("The binary equivalent of %d is: ", decimal);
    decimalToBinary(decimal);

    return 0;
}

int decimalToBinary(int decimal) {
    int binary[32], index = 0;

    while(decimal > 0) {
        binary[index++] = decimal % 2;
        decimal = decimal / 2;
    }

    for(int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
}

