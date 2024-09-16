#include <stdio.h>
 main() 
 {
    int number, original, reversed, remainder;
    int count = 0;

    while (count < 3) 
	{
        printf("\n\n\t Enter number %d: ", count + 1);
        scanf("%d", &number);

        original = number;
        reversed = 0;

        while (number != 0) 
		{
            remainder = number % 10;
            reversed = reversed * 10 + remainder;
            number /= 10;
    }
        if (original == reversed) 
		{
            printf("\n\n\t %d is a palindrome:", original);
        } 
		else 
		{
            printf("\n\n\t %d is not a palindrome:", original);
        }

        count++;
    }

    return 0;
}

