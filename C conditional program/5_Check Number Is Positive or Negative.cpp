#include <stdio.h>
main() 
{
    int num;

    
    printf("\n\n\t Enter an integer: ");
    scanf("%d", &num);

    if (num > 0) 
	{
        printf("\n\n\t %d is a positive number ", num);
    } else if (num < 0) {
        printf("\n\n\t %d is a negative number ", num);
    } else {
        printf("\n\n\t The number is zero ");
    }

    return 0;
}

