#include <stdio.h>

int main() 
{
    int limit, a = 0, b = 1, next;

    printf("\n\n\t Enter the limit up to which you want to print the Fibonacci series: ");
    scanf("%d", &limit);

    printf("Fibonacci series up to %d: ", limit);

    if (limit >= 0) 
	{
        printf("%d ", a);
    }
    if (limit >= 1) 
	{
    	
        printf("%d ", b);
    }

    next = a + b;
    while (next <= limit) 
	{
        printf("%d ", next);
        a = b;
        b = next;
        next = a + b;
    }

    printf("\n\n\t :");
    return 0;
}

