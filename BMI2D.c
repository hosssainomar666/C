#include <stdio.h>

int main() {
    float bmi[4][2]; // 2D array to store height and weight of 4 individuals
    int i;

    // Read height and weight of 4 individuals
    for (i = 0; i < 4; i++) {
        printf("Enter height and weight of person %d: ", i+1);
        scanf("%f %f", &bmi[i][0], &bmi[i][1]);
    }

    // Calculate BMI of each individual
    for (i = 0; i < 4; i++) {
        float height = bmi[i][0];
        float weight = bmi[i][1];
        float bmi_val = weight / (height * height);

        printf("Person %d - Height: %.2f m, Weight: %.2f kg, BMI: %.2f\n", i+1, height, weight, bmi_val);
    }

    return 0;
}

