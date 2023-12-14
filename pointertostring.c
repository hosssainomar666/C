#include <stdio.h>

size_t string_length(const char* str) {
    // Initialize a counter for the length
    size_t length = 0;

    // Iterate through the string until the null terminator is encountered
    while (*str != '\0') {
        length++;
        str++;
    }

    return length;
}

int main() {
    char str[] = "Hello, world!";
    size_t length = string_length(str);

    printf("The length of the string is: %zu\n", length);

    return 0;
}
