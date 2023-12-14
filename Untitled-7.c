#include <stdio.h>

int main() {
    FILE *fp;
    char filename, ch;

    printf("Enter the filename to open: ");
    scanf("%s", filename);

    fp = fopen(filename, "r"); // open file in read mode

    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    printf("File contents:\n");

    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp); // close the file

    return 0;
}