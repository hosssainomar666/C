#include <stdio.h>

int main() {
    FILE *fp;
    int num1, num2, sum;

    // Open the file in write mode
    fp = fopen("result.txt", "w");

    // If file does not exist or cannot be opened
    if (fp == NULL) {
        printf("Cannot open file \n");
        return 0;
    }

    // Read two numbers from user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Add the two numbers and write result to file
    sum = num1 + num2;
    fprintf(fp, "Sum of %d and %d is %d", num1, num2, sum);

    // Close the file
    fclose(fp);

    return 0;
}
