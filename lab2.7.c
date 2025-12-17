#include <stdio.h>

int main() {
    int N;
    int countFizzBuzz = 0, countFizz = 0, countBuzz = 0, countOther = 0;

    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (i % 15 == 0) {
            countFizzBuzz++;
        } else if (i % 3 == 0) {
            countFizz++;
        } else if (i % 5 == 0) {
            countBuzz++;
        } else {
            countOther++;
        }
    }


    printf("FizzBuzz count: %d\n", countFizzBuzz);
    printf("Fizz count: %d\n", countFizz);
    printf("Buzz count: %d\n", countBuzz);
    printf("Other count: %d\n", countOther);

    return 0;
}
