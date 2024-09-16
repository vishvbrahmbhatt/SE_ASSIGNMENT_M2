#include <stdio.h>
 main() 
 {
    int n, sum = 0;
    int i = 1;

    printf("\n\n\t Enter a positive integer: ");
    scanf("%d", &n);

    while (i <= n) 
	{
        sum += i;  
        i++;       
    }

    printf("\n\n\t The sum of natural numbers up to %d is: %d", n, sum);

    return 0;
}

