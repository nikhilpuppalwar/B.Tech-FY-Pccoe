#include <stdio.h>
int main() {
    float a = 33, b = 3, res;

    // Printing a and b
    printf("a is %f and b is %f\n", a, b);

    res = a + b; // Addition
    printf("a + b is %f\n", res);

    res = a - b; // Subtraction
    printf("a - b is %f\n", res);

    res = a * b; // Multiplication
    printf("a * b is %f\n", res);

    res = a / b; // Division
    printf("a / b is %f\n", res);
    // in float datatype we can use % operator to find 
    return 0;
}
