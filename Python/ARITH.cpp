#include <stdio.h>
#include <math.h>  // fmod 함수 사용을 위해 추가

int main() {
    // Variable declaration
    double num1, num2;
    
    // User input
    printf("Enter the first number: ");
    scanf("%lf", &num1);  // Input for a floating point number
    
    printf("Enter the second number: ");
    scanf("%lf", &num2);  // Input for a floating point number

    // Output arithmetic operations
    printf("\nArithmetic operations result:\n");
    printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);  // Addition
    printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);  // Subtraction
    printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);  // Multiplication
    if (num2 != 0) {
        printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);  // Division
        printf("%.2lf %% %.2lf = %.2lf\n", num1, num2, fmod(num1, num2));  // Modulus
    } else {
        printf("The second number cannot be zero! Division and modulus operations are not possible.\n");
    }

    return 0;
}
