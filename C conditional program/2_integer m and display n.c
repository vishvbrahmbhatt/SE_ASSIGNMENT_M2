#include <stdio.h>
 main() 
 {
    int m, n;

    printf("\n\n\t Enter an integer value for m: ");
    scanf("%d", &m);

    if 
	(m > 0) 
	{
        n = 1;
    } 
	else if (m == 0) 
	{
        n = 0;
    }
	 else 
	 
	 {
        n = -1;
    }

    printf("\n\n\t The value of n is: %d", n);

    return 0;
}

