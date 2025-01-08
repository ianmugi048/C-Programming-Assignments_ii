#include <stdio.h>
#include <stdlib.h>

/*Function prototypes*/
int add(int, int);
int subtract(int, int);
int multiply(int, int);
float divide(float, float);

int sum, product, difference, num1, num2, result;
float quotient;
char operation;

int main()
{
    /*Creating infinite loop*/
    while (1) {

        /*Printing the operator menu*/
        printf("Character\t Operation\n a\t\t add\n s\t\t subtract\n m\t\t multiply\n d\t\t divide");
        
        /*Prompting the user for inputs*/
        printf("\nEnter your first number followed by an operation character followed by your second number:");
        scanf("%d %c %d", &num1, &operation, &num2);

        /*Operator selection switching*/
        switch (operation) {
            case 'a':
                sum = add(num1, num2);
                printf("Result: %d\n", sum);
                break;
            case 's':
                difference = subtract(num1, num2);
                printf("Result: %d\n", difference);
                break;
            case 'm':
                product = multiply(num1, num2);
                printf("Result: %d\n", product);
                break;
            case 'd':
                if (num2 != 0) {
                    quotient = divide((float)num1, (float)num2);
                    printf("Result: %.2f\n", quotient);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Invalid operation.\n");
                break;
        }
    }

    return 0;
}

/*Function Definitions*/
int add(int a, int b)
{
    return (a + b);
}

int subtract(int a, int b)
{
    return (a - b);
}

int multiply(int a, int b)
{
    return (a * b);
}

float divide(float a, float b)
{
    return (a / b);
}
