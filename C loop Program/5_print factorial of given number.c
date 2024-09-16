#include <stdio.h>
 main() 
{
    int number, i = 1;
     long factorial = 1;

    
    printf("\n\n\t Enter a number to find its factorial: ");
    scanf("%d", &number);

    if (number < 0) 
	{
        printf("\n\n\t Factorial is not defined for negative numbers ");
    } 
	else 
	{
        while (i <= number) 
		{
            factorial *= i;
            i++;
        }

        printf("\n\n\t Factorial of %d = %llu", number, factorial);
    }

    return 0;
}

