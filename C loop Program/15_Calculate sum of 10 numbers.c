#include <stdio.h>
 main() 
 {
    int number, sum = 0;
    int i = 1;

    while (i <= 10) 
	{
        printf("\n\n\t Enter number %d: ", i);
        scanf("%d", &number);
        sum += number;
        i++;
    }

    printf("\n\n\t The sum of the 10 numbers is: %d", sum);

    return 0;
}

