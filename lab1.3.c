#include <stdio.h>

int main() {
    int number1, number2, operationCode, result;

    printf("Enter your number: \n");
  
    if (scanf("%d %d %d", &number1, &number2, &operationCode) != 3) {
        return 1; 
    }
    if (operationCode == 1) {
        result = number1 + number2;
        printf("Result: %d\n", result);
    } else if (operationCode == 2) {
        result = number1 - number2;
        printf("Result: %d\n", result);
    } else if (operationCode == 3) {
        result = number1 * number2;
        printf("Result: %d\n", result);
    } else if (operationCode == 4) {
        if (number2 != 0) {
            result = number1 / number2;
            printf("Result: %d\n", result);
        } else {
            printf("Error: Division by zero\n");
        }
    } else {
        printf("Invalid operation code\n");
    }

    return 0;
}