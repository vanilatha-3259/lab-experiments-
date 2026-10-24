#include <stdio.h>

int main() 
{
    double a, b, result;
    int choice;

    printf("Simple Calculator Simulator\n");
    printf("---------------------------\n");

    printf("Enter first number: ");
    scanf("%lf", &a);
    printf("Enter second number: ");
    scanf("%lf", &b);

    printf("\nSelect Operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("\nResult:\n");
    printf("---------------------------\n");

    switch (choice) 
    {
        case 1:
            result = a + b;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case 2:
            result = a - b;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case 3:
            result = a * b;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case 4:
            if (b == 0) 
            {
                printf("Division by zero is not possible\n");
            } 
            else 
            {
                result = a / b;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            }
            break;

        default:
            printf("Invalid option\n");
            break;
    }

    return 0;
}
    
    
    