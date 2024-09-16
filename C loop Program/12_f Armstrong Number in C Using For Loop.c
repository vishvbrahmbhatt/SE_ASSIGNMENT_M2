#include <stdio.h>

int main() 
{
    int number, originalNumber, remainder, result = 0, n = 0;

    printf("\n\n\t Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;

    for (originalNumber = number; originalNumber != 0; ++n) 
	{
        originalNumber /= 10;
    }

    originalNumber = number;

    for (originalNumber = number; originalNumber != 0; originalNumber /= 10) 
	{
        remainder = originalNumber % 10;
        result += pow(remainder, n);
    }

    if (result == number) 
	{
        printf("\n\n\t %d is an Armstrong number", number);
    } 
	else 
	{
        printf("\n\n\t %d is not an Armstrong number", number);
    }

    return 0;
}

