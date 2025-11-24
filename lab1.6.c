#include <stdio.h>

int main() {
 int num;

 do
 {
    printf("++++Enter a numbe(0-10)):++++ ");
    if (scanf("%d",&num)!=1){
        break;
    } 
 } while (num < 0 || num > 10);
 printf("Input accepted: %d\n", num);
    return 0; 
}