#include <stdio.h>

int main() {
    float bmi[4]; // array to store BMI values for each friend
    int i;

    // Collect height and weight for each friend
    for (int i = 0; i < 4; i++)
    {
        printf("Enter height (in meters) and weight (in kilograms) for friend %d: ", i+1);
        float height, weight;
        scanf("%f %f", &height, &weight);

        // Calculate BMI for current friend
        bmi[i] = weight / (height * height);
    }

    // Display the results
    printf("\n");
    for (int i = 0; i < 4; i++)
        {
        printf("Friend %d - BMI: %.2f\n", i+1, bmi[i]);
        }

    return 0;
}
