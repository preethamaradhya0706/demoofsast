#include <stdio.h>

int main() {
    double num1, num2, num3;

    // Prompt user for input
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    // Check conditions using logical AND (&&)
    if (num1 >= num2 && num1 >= num3) {
        printf("%.2lf is the largest number.\n", num1);
    } 
    else if (num2 >=
