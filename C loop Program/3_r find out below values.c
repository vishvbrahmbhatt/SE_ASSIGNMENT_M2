#include <stdio.h>
 main() {
    int count = 0;
    int number;
    int evenCount = 0, oddCount = 0;
    int evenSum = 0, oddSum = 0;

    while (count < 10) 
	{
        printf("\n\n\t Enter number %d: ", count + 1);
        scanf("%d", &number);

        if (number % 2 == 0) 
		{
            evenCount++;          
            evenSum += number;    
        }
		else 
		{
            oddCount++;           
            oddSum += number;     
        }

        count++; 
    }

    printf("\n\n\t Total even numbers: %d\n", evenCount);
    printf("\n\n\t Total odd numbers: %d\n", oddCount);
    printf("\n\n\t Sum of even numbers: %d\n", evenSum);
    printf("\n\n\t Sum of odd numbers: %d\n", oddSum);

    return 0;
}

