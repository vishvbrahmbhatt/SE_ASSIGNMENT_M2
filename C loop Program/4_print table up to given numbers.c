#include <stdio.h>

int main() 
{
    int number, i = 1, limit;
    
    printf("\n\n\t Enter the number for which you want to print the table: ");
    scanf("%d", &number);

    printf("\n\n\t Enter the limit up to which you want the table to be printed: ");
    scanf("%d", &limit);

    while (i <= limit) 
	{
        printf("%d x %d = %d", number, i, number * i);
        i++;
    }

    return 0;
}

