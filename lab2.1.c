#include <stdio.h>
int N,i;
int main() {
    if (scanf ("%d", &N) != 1)
    {
        return 1;
    }
    for ( i = 0; i < N; i++)
    {
        printf("Hello Loop!\n");
    }
    
    if (N <= 0)
    {
        printf("Error\n");
    }
    
    return 0;
}