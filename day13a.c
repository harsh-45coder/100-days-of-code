//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main() {
    int a, b;
    char op;

    // Step 1: Input
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);   // note the space before %c to avoid newline issues

    printf("Enter second number: ");
    scanf("%d", &b);

    // Step 2: Switch-case
    switch (op) {
        case '+':
            printf("%d + %d = %d\n", a, b, a + b);
            break;

        case '-':
            printf("%d - %d = %d\n", a, b, a - b);
            break;

        case '*':
            printf("%d * %d = %d\n", a, b, a * b);
            break;

        case '/':
            if (b != 0)
                printf("%d / %d = %d\n", a, b, a / b);
            else
                printf("Error: Division by zero not allowed.\n");
            break;

        case '%':
            if (b != 0)
                printf("%d %% %d = %d\n", a, b, a % b);
            else
                printf("Error: Modulo by zero not allowed.\n");
            break;

        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
