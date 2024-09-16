#include <stdio.h>
 main() 
 {
    int number, reversed = 0, remainder;

    printf("\n\n\t Enter a number to reverse: ");
    scanf("%d", &number);

    int original = number;

    for (; number != 0; number /= 10) 
	{
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
    }

    printf("\n\n\t The reverse of %d is %d", original, reversed);

    return 0;
}

