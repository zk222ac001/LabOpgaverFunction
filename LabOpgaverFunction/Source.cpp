#include <stdio.h>

// Function Prototype 
double isRightTriangle(double a, double b, double c);
/*  

This function checks the Pythagorean theorem for all combinations of the sides to determine 
if they form a right triangle. If any combination satisfies the theorem, 
it returns a positive value; otherwise, it returns a negative value.
*/

// Function to check if a, b, c can form a right triangle
// Optimized function to check if a, b, c can form a right triangle
double isRightTriangle(double a, double b, double c) {
    double a2 = a * a;
    double b2 = b * b;
    double c2 = c * c;

    // Check if a, b, c can form a right triangle
    return (a2 + b2 == c2 || a2 + c2 == b2 || b2 + c2 == a2) ? 1.0 : -1.0;
}

int main() {
    double a = 3.0, b = 4.0, c = 5.0;
    double result = isRightTriangle(a, b, c);

    if (result > 0) {
        printf("The sides %.2f, %.2f, and %.2f form a right triangle.\n", a, b, c);
    }
    else {
        printf("The sides %.2f, %.2f, and %.2f do not form a right triangle.\n", a, b, c);
    }

    return 0;
}