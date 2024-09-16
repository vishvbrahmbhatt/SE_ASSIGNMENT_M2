#include <stdio.h>
main() 
{
	
    int number, maxDigit = 0, digit;

    
    printf("\n\n\t Enter a number: ");
    scanf("%d", &number);

    if (number < 0) 
	{
        number = -number;
    }

    while (number != 0) 
	{
        digit = number % 10;  
        if (digit > maxDigit) 
		{
            maxDigit = digit;  
        }
        number /= 10; 
    }

    
    printf("\n\n\t The maximum digit is %d", maxDigit);

    return 0;
}

