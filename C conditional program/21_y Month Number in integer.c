#include <stdio.h>
 main() 
 {
    int month, year;    int days;
    

    printf("\n\n\t Enter the month number (1-12): ");
    scanf("%d", &month);

    
    printf("\n\n\t Enter the year: ");
    scanf("%d", &year);

    switch (month) {
        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            days = 31;
            break;
        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            days = 30;
            break;
        case 2:  // February
            
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
			{
                days = 29; // Leap year
            }
			 else 
			 {
                days = 28; // Non-leap year
            }
            break;
        default:
            printf("\n\n\t Invalid month number ");
            return 1;
    }

    
    printf("\n\n\t Number of days in month %d of year %d: %d\n", month, year, days);

    return 0;
}

