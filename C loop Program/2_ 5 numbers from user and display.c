#include <stdio.h>
 main() 
 {
    int numbers[5];
    int i = 0;

    printf("Enter 5 numbers:");
    while (i < 5) {
        printf("\n\n\t Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        i++;
    }

    printf("\n\n\t You entered the following numbers:");
    i = 0; 
    while (i < 5) 
	{
        printf("\n\n\t %d", numbers[i]);
        i++;
    }

    return 0;
}

