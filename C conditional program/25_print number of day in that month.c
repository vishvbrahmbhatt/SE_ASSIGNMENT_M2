#include <stdio.h>

 main() 
 {
    int monthNumber, year, days;


    printf("\n\n\t Enter the month number (1-12): ");
    scanf("%d", &monthNumber);

    if (monthNumber == 2) 
	{
        printf("\n\n\t Enter the year: ");
        scanf("%d", &year);
    }

    
    switch (monthNumber) 
	{
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
                days = 29; 
            }
			 else 
			 {
                days = 28; 
            }
            
            break;
        default:
            printf("\n\n\t Invalid month number. Please enter a number between 1 and 12");
            return 1; 
    }

    
    printf("\n\n\t Number of days in month %d: %d", monthNumber, days);

    return 0;
}

