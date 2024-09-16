#include <stdio.h>
 main() 
{
    int n, sum = 0, total = 0, i = 1;

    printf("\n\n\t Enter the value of n: ");
    scanf("%d", &n);

    while (i <= n) 
	{
        int j = 1;
        int current_sum = 0;

        while (j <= i) 
		{
            current_sum += j;
            j++;
        }

        total += current_sum;

        i++;
    }

    printf("\n\n\t The sum of the series is %d", total);

    return 0;
}

