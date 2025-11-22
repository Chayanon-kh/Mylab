#include <stdio.h>
int main() {
    int N,i;

    if (scanf("%d", &N) != 1) {
        printf("Error.\n");
        return 1; 
    }//Endif

    if (N < 0) {           
        printf("Error\n");
    }//Endif

    for (i = 0; i < N; i++) {
        printf("Hello Loop!\n"); 
    }//Endloop.
    
    return 0;
}