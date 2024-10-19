#include <stdio.h>
#include <math.h>
// Function prototype 
void find_roots(float a, float b, float c);

// Function declaration
// Function to calculate the roots of a quadratic equation
void find_roots(float a, float b, float c) {
    float discriminant = b * b - 4 * a * c;
    float root1, root2;

    if (discriminant > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if (discriminant == 0) {
        // Two identical real roots
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and identical.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    }
    else {
        // Complex roots
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }
}

int main() {
    // Test case 1: x² - 7x + 10 = 0
    printf("Test case 1: x² - 7x + 10 = 0\n");
    find_roots(1, -7, 10);

    // Test case 2: x² + 2x + 1 = 0
    printf("\nTest case 2: x² + 2x + 1 = 0\n");
    find_roots(1, 2, 1);

    return 0;
}