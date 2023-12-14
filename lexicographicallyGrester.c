#include <stdio.h>
#include <string.h>

char* lexicographically_greater(const char* str1, const char* str2) {
    // Compare the strings using strcmp function from the standard library
    int comparison_result = strcmp(str1, str2);

    // Return the pointer to the greater string
    if (comparison_result >= 0)
        return (char*)str1;
    else
        return (char*)str2;
}

int main() {
    char str1[] = "hello";
    char str2[] = "world";

    char* greater_string = lexicographically_greater(str1, str2);

    printf("The lexicographically greater string is: %s\n", greater_string);

    return 0;
}
