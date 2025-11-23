#include <stdio.h>

int main() {
    int num1, num3, opt, result;

    if (scanf("%d %d %d", &num1, &num3, &opt) != 3) {
        return 1; 
    }
    if (opt == 1) {
        result = num1 + num3;
        printf("Result: %d\n", result);
    } else if (opt == 2) {
        result = num1 - num3;
        printf("Result: %d\n", result);
    } else if (opt == 3) {
        result = num1 * num3;
        printf("Result: %d\n", result);
    } else if (opt == 4) {
        if (num3 != 0) {
            result = num1 / num3;
            printf("Result: %d\n", result);
        } else {
            printf("Error\n");
        }
    } else {
        printf("Invalid operation\n");
    }//End if-else

    return 0;
}