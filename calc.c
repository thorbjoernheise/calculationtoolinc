#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    printf("Enter two operands and an operator (+, -, *, /, %%) : ");
    scanf("%lf %lf %c", &num1, &num2, &operator);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Cannot divide by zero");
                return 0;
            }
            result = num1 / num2;
            break;
        case '%':
            if ((long long)num2 == 0) {
                printf("Error: Cannot divide by zero");
                return 0;
            }
            result = (long long)num1 % (long long)num2;
            break;
        default:
            printf("Error: Invalid operator");
            return 0;
    }

    printf("%.2lf %c %.2lf = %.2lf", num1, operator, num2, result);

    return 0;
}
