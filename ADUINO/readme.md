#include <stdio.h>
#include <math.h>  // fmod() 사용을 위한 헤더

// ✅ 연산 결과 출력 함수
void print_results(double a, double b) {
    printf("\n[Arithmetic Results for %.2lf and %.2lf]\n", a, b);
    printf("%.2lf + %.2lf = %.2lf\n", a, b, a + b);
    printf("%.2lf - %.2lf = %.2lf\n", a, b, a - b);
    printf("%.2lf * %.2lf = %.2lf\n", a, b, a * b);
    
    if (b != 0) {
        printf("%.2lf / %.2lf = %.2lf\n", a, b, a / b);
        printf("%.2lf %% %.2lf = %.2lf\n", a, b, fmod(a, b));
    } else {
        printf("Error: Cannot divide or get modulus by zero.\n");
    }
}

// ✅ 테스트 함수
void test_print_results() {
    printf("=== Test Case: (10, 3) ===\n");
    print_results(10, 3);

    printf("\n=== Test Case: (7, 0) ===\n");
    print_results(7, 0);
}

int main() {
    double num1, num2;

    // 사용자 입력
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // 연산 결과 출력
    print_results(num1, num2);

    // 테스트 실행
    test_print_results();

    return 0;
}

