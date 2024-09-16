#include <stdio.h>
 main() 
 {
   
    float height;

    
    printf("\n\n\t Enter your height in centimeters: ");
    scanf("%f", &height);

    
    if (height < 140.0) 
	{
        printf("\n\n\t You are categorized as Short ");
    } 
	else if (height >= 140.0 && height <= 180.0) 
	{
        printf("\n\n\t You are categorized as Average height ");
    }
	 else 
	{
        printf("\n\n\t You are categorized as Tall ");
    }

    return 0;
}

