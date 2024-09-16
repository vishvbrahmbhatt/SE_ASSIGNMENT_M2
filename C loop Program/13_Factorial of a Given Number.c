#include <stdio.h>

int main() 
{
    int number, factorial = 1;

    printf("\n\n\t Enter a number: ");
    scanf("%d", &number);

    if (number == 0) 
	{
        factorial = 1;
    } 
	else 
	{
        int i = number;
        while (i > 0) 
		{
            factorial *= i;
            i--;
        }
    }

    printf("\n\n\t The factorial of %d is %d", number, factorial);

    return 0;
}

