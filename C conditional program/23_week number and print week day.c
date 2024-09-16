#include <stdio.h>
 main() 
 {
    int weekNumber;
    
    printf("\n\n\t Enter the week number (1-7): ");
    scanf("%d", &weekNumber);

    switch (weekNumber) {
        case 1:
            printf("\n\n\t Sunday");
            break;
        case 2:
            printf("\n\n\t Monday");
            break;
        case 3:
            printf("\n\n\t Tuesday");
            break;
        case 4:
            printf("\n\n\t Wednesday");
            break;
        case 5:
            printf("\n\n\t Thursday");
            break;
        case 6:
            printf("\n\n\t Friday");
            break;
        case 7:
            printf("\n\n\t Saturday");
            break;
        default:
            printf("\n\n\t Invalid week number. Please enter a number between 1 and 7");
            break;
    }

    return 0;
}

