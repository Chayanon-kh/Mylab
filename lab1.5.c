#include <stdio.h>

int main() {
    int num;
    int evenSum = 0;
    int oddSum = 0;

    if (scanf("%d", &num) != 1) {
 
        return 1; 
    }
    
    if (num != 0) { 
        if (num % 2 == 0) {
            evenSum += num; 
        } else {
            oddSum += num; 
        }
    }
    while (num != 0 ) {
        
        if (scanf("%d", &num) != 1) {
            break; 
        }
        
        if (num != 0) {
            if (num % 2 == 0) {
                evenSum += num; 
            } else {
                oddSum += num; 
            }
        }
    }
    printf("Even Sum: %d\n", evenSum);
    printf("Odd Sum: %d\n", oddSum);
    
    return 0; 
}