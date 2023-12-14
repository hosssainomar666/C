#include <stdio.h>
#include <math.h>

int main() {
  float a, b, c, root1, root2, discriminant;

  printf("Enter the coefficients of the quadratic equation (a, b, c): ");
  scanf("%f %f %f", &a, &b, &c);

  // Calculate the discriminant
  discriminant = (b * b - 4 * a * c);

  // Check the nature of the roots
  if (discriminant > 0) {
    // Real and distinct roots
    root1 = (-b + sqrt(discriminant)) / (2 * a);
    root2 = (-b - sqrt(discriminant)) / (2 * a);

    printf("The roots of the quadratic equation are: %.2f and %.2f\n", root1, root2);
  } else if (discriminant == 0) {
    // Real and equal roots
    root1 = -b / (2 * a);

    printf("The roots of the quadratic equation are: %.2f and %.2f\n", root1, root1);
  } else {
    // Complex roots
    printf("The roots of the quadratic equation are complex.\n");
  }

  return 0;
}
