#include <stdio.h>
 main() 
 {
    int n;
    double sum = 0.0;
    int i = 1;


    printf("\n\n\t Enter the value of n: ");
    scanf("%d", &n);

    while (i <= n) 
	{
        
        if (i % 2 == 0) 
		{
            
            sum -= (double)i / (i + 1);
        }
		else 
		{
            
            sum += (double)i / (i + 1);
        }
        i++;
    }

    
    printf("/n/n/t The sum of the series is %.6f", sum);

    return 0;
}

