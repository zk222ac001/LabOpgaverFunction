#include <stdio.h>

// Function Prototype 
double isRightTriangleAndArea(double a, double b, double c, double* area);

double isRightTriangleAndArea(double a, double b, double c, double* area) {
    double a2 = a * a;
    double b2 = b * b;
    double c2 = c * c;

    // Check if a, b, c can form a right triangle
    if (a2 + b2 == c2) {
        *area = 0.5 * a * b;
        return 1.0;
    }
    else if (a2 + c2 == b2) {
        *area = 0.5 * a * c;
        return 1.0;
    }
    else if (b2 + c2 == a2) {
        *area = 0.5 * b * c;
        return 1.0;
    }
    else {
        *area = -1.0; // Indicate that the triangle is not a right triangle
        return -1.0;
    }
}

int main() {
    double a = 3.0, b = 4.0, c = 5.0;
    double area;
    double result = isRightTriangleAndArea(a, b, c, &area);

    if (result > 0) {
        printf("The sides %.2f, %.2f, and %.2f form a right triangle.\n", a, b, c);
        printf("The area of the right triangle is %.2f.\n", area);
    }
    else {
        printf("The sides %.2f, %.2f, and %.2f do not form a right triangle.\n", a, b, c);
    }

    return 0;
}

/*
Key Optimizations:
Precompute Squares: The squares of the sides are computed once and
                    stored in variables.
Single Return Statement: The function uses a single return statement
                    for each condition, reducing the number of comparisons.
Simplified Logic: The logic checks each combination of sides only once, 
                  ensuring minimal computational overhead.
*/