#include <stdio.h>
 main() 
 {
    int count = 0;
    int number;
    int even_count = 0;
    int odd_count = 0;

    while (count < 5) 
	{
        printf("\n\n\t Enter number %d: ", count + 1);
        scanf("%d", &number);

        if (number % 2 == 0) 
		{
            even_count++;
        } 
		else 
		{
            odd_count++;
        }

        count++;
    }

    printf("\n\n\t Even numbers: %d", even_count);
    printf("\n\n\t Odd numbers: %d\n", odd_count);

    return 0;
}

