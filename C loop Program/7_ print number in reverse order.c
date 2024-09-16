#include <stdio.h>
 main() 
 {
    int number, reverse = 0, remainder;

    printf("\n\n\t Enter a number: ");
    scanf("%d", &number);

    while (number != 0) 
	{
        remainder = number % 10;         
        reverse = reverse * 10 + remainder; 
        number /= 10;                      
    }

    printf("Reversed number = %d", reverse);

    return 0;
}

