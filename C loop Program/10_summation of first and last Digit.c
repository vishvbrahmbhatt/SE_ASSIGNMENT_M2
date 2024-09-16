#include <stdio.h>

int main() {
    int number, lastDigit, firstDigit;

    printf("\n\n\t Enter a number: ");
    scanf("%d", &number);

    if (number < 0) 
	{
        number = -number;
    }

    lastDigit = number % 10;

    firstDigit = number;
    while (firstDigit >= 10) 
	{
        firstDigit /= 10;  
    }

    printf("\n\n\t The summation of the first and last digit is: %d", firstDigit + lastDigit);

    return 0;
}

