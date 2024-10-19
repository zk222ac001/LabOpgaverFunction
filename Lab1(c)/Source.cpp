#include <stdio.h>

float find_maximum(float a, float b, float c, float d);

float find_maximum(float a, float b, float c, float d) {
    float max = a;

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (d > max) {
        max = d;
    }

    return max;
}

int main() {
    float num1 = 3.5;
    float num2 = 7.2;
    float num3 = 1.8;
    float num4 = 5.9;

    printf("The largest number is: %.2f\n", find_maximum(num1, num2, num3, num4));

    return 0;
}