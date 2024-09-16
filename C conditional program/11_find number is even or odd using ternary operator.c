#include <stdio.h>
 main() 
{
    int number;

    
    printf("/n/n/t Enter a number: ");
    scanf("%d", &number);

    
    (number % 2 == 0) ? printf("\n\n\t The number is Even") : printf("\n\n\t The number is Odd");

    return 0;
}

