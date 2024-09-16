#include <stdio.h>

 main() 
 {
    int number;

    
    printf("\n\n\t Enter a number: ");
    scanf("%d", &number);

    
    if (number > 0) 
	{
        printf("\n\n\t The number is Positive ");
    } 
	else if (number < 0) 
	{
        printf("\n\n\t The number is Negative ");
    }
	 else
    {
        printf("\n\n\t The number is Zero");
    }

    return 0;
}

