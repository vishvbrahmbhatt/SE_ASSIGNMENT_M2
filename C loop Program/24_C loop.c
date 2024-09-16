#include <stdio.h>
 main() 
 {
    int n, sum = 0, i = 1;

    printf("\n\n\t Enter the value of n: ");
    scanf("%d", &n);

    while (i <= n) 
	{
        sum += i * i;  
        i++;         
    }

    printf("\n\n\t The sum of squares from 1 to %d is %d", n, sum);

    return 0;
}

