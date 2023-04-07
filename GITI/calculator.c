#include <stdio.h>
#include <math.h>

float add(float num1, float num2) {
    return num1 + num2;
}

float subtract(float num1, float num2) {
    return num1 - num2;
}

float multiply(float num1, float num2) {
    return num1 * num2;
}

float divide(float num1, float num2) {
    if (num2 == 0) {
        printf("Error: Division by zero\n");
        return 0;
    }
    return num1 / num2;
}

float squareRoot(float num) {
    return sqrt(num);
}

float power(float num, int m) {
    return pow(num, m);
}

int main() {
    int choice;
    float num1, num2;
    
    printf("Select an operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Square Root\n");
    printf("6. Power\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            printf("Result: %.2f\n", add(num1, num2));
            break;
            
        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            printf("Result: %.2f\n", subtract(num1, num2));
            break;
            
        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            printf("Result: %.2f\n", multiply(num1, num2));
            break;
            
        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            printf("Result: %.2f\n", divide(num1, num2));
            break;
            
        case 5:
            printf("Enter a number: ");
            scanf("%f", &num1);
            printf("Result: %.2f\n", squareRoot(num1));
            break;
            
        case 6:
            printf("Enter a number and power: ");
            scanf("%f %d", &num1, &choice);
            printf("Result: %.2f\n", power(num1, choice));
            break;
            
        default:
            printf("Invalid choice\n");
            break;
    }
    
    return 0;
}