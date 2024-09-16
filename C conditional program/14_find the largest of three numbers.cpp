#include <stdio.h>
 main() 
 {
    int num1, num2, num3, largest;

    
    printf("\n\n\t Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    
    if (num1 >= num2 && num1 >= num3) 
	{
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) 
	
	{
        largest = num2;
    } 
	
	else 
	
	{
        largest = num3;
    }

    printf("\n\n\t The largest number is: %d", largest);

    return 0;
}

