#include <stdio.h>
#include <math.h>

// Function to add two numbers
float add(float num1, float num2) {
    return num1 + num2;
}

// Function to subtract two numbers
float subtract(float num1, float num2) {
    return num1 - num2;
}

// Function to multiply two numbers
float multiply(float num1, float num2) {
    return num1 * num2;
}

// Function to divide two numbers
float divide(float num1, float num2) {
    return num1 / num2;
}

// Function to calculate the square root of a number
float square_root(float num) {
    return sqrt(num);
}

// Function to calculate the power of a number
float power(float num, int exponent) {
    return pow(num, exponent);
}

// Function to calculate the average of a sequence of numbers
float average(int n) {
    float sum = 0, num;
    for (int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        sum += num;
    }
    return sum / n;
}

int main() {
    float num1, num2, result;
    int exponent, n;

    // Prompt the user for input
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Perform each operation and print the result
    result = add(num1, num2);
    printf("%.2f + %.2f = %.2f\n", num1, num2, result);

    result = subtract(num1, num2);
    printf("%.2f - %.2f = %.2f\n", num1, num2, result);

    result = multiply(num1, num2);
    printf("%.2f * %.2f = %.2f\n", num1, num2, result);

    result = divide(num1, num2);
    printf("%.2f / %.2f = %.2f\n", num1, num2, result);

    result = square_root(num1);
    printf("Square root of %.2f = %.2f\n", num1, result);

    printf("Enter the exponent for power calculation: ");
    scanf("%d", &exponent);
    result = power(num1, exponent);
    printf("%.2f ^ %d = %.2f\n", num1, exponent, result);

    printf("Enter the number of elements in the sequence: ");
    scanf("%d", &n);
    result = average(n);
    printf("The average of the sequence is %.2f\n", result);

    return 0;
}
