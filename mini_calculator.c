#include <stdio.h>

/* Function declarations */
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    int choice;
    float num1, num2, result;

    /* Step 3: Display menu */
    printf("\n===== MINI CALCULATOR =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");

    /* Step 4: Take user choice */
    printf("Enter your choice: ");
    scanf("%d", &choice);

    /* Step 5: Store choice in variable (choice already stored) */

    /* Step 6: Use switch-case */
    switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = add(num1, num2);      // Step 7 & 8
            printf("Result = %.2f\n", result);  // Step 9 & 10
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = subtract(num1, num2);
            printf("Result = %.2f\n", result);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = multiply(num1, num2);
            printf("Result = %.2f\n", result);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = divide(num1, num2);
            printf("Result = %.2f\n", result);
            break;

        case 5:
            printf("Thank you for using Mini Calculator!\n");
            break;

        default:
            printf("Invalid choice! Please try again.\n");
    }

    return 0;
}

/* Function definitions */

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b == 0) {
        printf("Error! Division by zero is not allowed.\n");
        return 0;
    }
    return a / b;
}
