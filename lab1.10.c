#include <stdio.h>
int level, age, isActive;
int main() {
    printf("Enter level (1-3), age and activity status (1 for active, 0 for inactive): ");
    if (scanf("%d %d %d", &level, &age, &isActive) != 3) {
        return 1; 
    }
    
   if (age < 0 || (isActive != 0 && isActive != 1))
   {
    printf("Error\n");
    return 0;
   }
   
    switch (level) {
        case 1:
           
                printf("Access Denied\n");

            break;
        case 2:
            if (age < 25) {
                printf("Access Denied\n");
            } else if (isActive == 1) {
                printf("Access Granted\n");
            } else {
                printf("Access Denied\n");
            }
            break;
        case 3:
           if (isActive == 1) {
                printf("Access Granted\n");
            } else {
                printf("Access Denied\n");
            }
            break;
        default:
            printf("Invalid Level\n");
            return 0;
    }
    
    return 0; 
}