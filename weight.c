#include <stdio.h>

int main() {
    int n,i;
    printf("Enter the number of persons: ");
    scanf("%d", &n);
    int weights[n];
    printf("Enter the weights of the persons: ");
    for ( i = 0; i < n; i++) {
        scanf("%d", &weights[i]);
    }
    for (int i = 2; i < n; i++) {
        if (weights[i] == weights[i-1] + weights[i-2]) {
            printf("The heavy person is person %d with weight %d\n", i+1, weights[i]);
            return 0;
        }
    }
    printf("No heavy person found.\n");
    return 0;
}

