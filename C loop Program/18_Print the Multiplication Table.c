#include <stdio.h>
 main() 
 {
    int N, i = 1;

    printf("\n\n\t Enter a number to print its multiplication table: ");
    scanf("%d", &N);

    while (i <= 10) 
	{
        printf("\n\n\t %d * %d = %d\n", N, i, N * i);
        i++;
    }

    return 0;
}

