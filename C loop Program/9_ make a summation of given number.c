#include <stdio.h>
 main() 
 {
    int number, sum = 0, digit;

    printf("\n\n\t Enter a number: ");
    scanf("%d", &number);

    if (number < 0) 
	{
        number = -number;
    }

    while (number != 0) 
	{
        digit = number % 10;  
        sum += digit;         
        number /= 10;        
    }

    printf("\n\n\t The summation of all digits is: %d", sum);

    return 0;
}

