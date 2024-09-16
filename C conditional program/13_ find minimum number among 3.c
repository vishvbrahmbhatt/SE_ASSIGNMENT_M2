#include <stdio.h>
main() 
{
    int num1, num2, num3, min;

    
    printf("\n\n\t Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    
    min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);

    printf("\n\n\t The minimum number is: %d", min);

    return 0;
}

