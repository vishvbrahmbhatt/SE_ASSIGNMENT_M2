#include <stdio.h>
 main() 
 {
    int numbers[5]; 
    int factorial, i, j;

    printf("Enter 5 numbers:");
    for (i = 0; i < 5; i++) 
	{
        printf("\n\n\t Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 5; i++) 
	{
        factorial = 1;  
        for (j = 1; j <= numbers[i]; j++) 
		{
            factorial *= j;
        }
        printf("\n\n\t Factorial of %d is %d\n", numbers[i], factorial);
    }

    return 0;
}

