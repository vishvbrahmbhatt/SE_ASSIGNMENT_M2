#include <stdio.h>
 main() 
 {
    int n, total = 0;


    printf("\n\n\t Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
	{
        int current_sum = 0;
        
        for (int j = 1; j <= i; j++) 
		{
            current_sum += j;
        }

        
        total += current_sum;
    }
    
    printf("\n\n\t The sum of the series is %d", total);

    return 0;
}

