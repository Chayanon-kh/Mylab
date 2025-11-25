#include <stdio.h>
int main() {
    int DayCode;
    int hour;

    printf("Enter day code (1-7) and hour (0-23): ");
    if (scanf("%d %d", &DayCode, &hour) != 2) {
        return 1; 
    }
   if (hour < 0 || hour > 23)
   {
    printf("Error\n");
    return 0;
   }
   
    switch (DayCode)
    {
    case 1:
        if (hour <= 17) {
            printf("System running\n");
        }else  printf("System off-hours\n");
        
        break;
    
    case 2:
        if (hour <= 17) {
            printf("System running\n");
        }  else  printf("System off-hours\n");
    case 3:
        if (hour <= 17) {
            printf("System running\n");
        }else  printf("System off-hours\n");
        break;
    case 4:
        if (hour <= 17) {
            printf("System running\n");
        }else  printf("System off-hours\n");
        break;
    case 5:
        if (hour <= 17) {
            printf("System running\n");
        }else  printf("System off-hours\n");
        break;  
    case 6:
        
            printf("Weekend Relax Mode\n");
        
        break;
    case 7: 
            printf("Weekend Relax Mode\n");
        
        break;
    default:
        printf("Invalid day code\n");
    }
  
    return 0; 
}