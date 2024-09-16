#include <stdio.h>
 main() 
 {
    float angle1, angle2, angle3;

    printf("\n\n\t Enter the first angle: ");
    scanf("%f", &angle1);
    
    printf("\n\n\t Enter the second angle: ");
    scanf("%f", &angle2);
    
    printf("\n\n\t Enter the third angle: ");
    scanf("%f", &angle3);
    

    if (angle1 > 0 && angle2 > 0 && angle3 > 0 && (angle1 + angle2 + angle3 == 180)) 
	{
        printf("\n\n\t The angles can form a triangle ");
    } 
	
	else 
	{
        printf("\n\n\t The angles cannot form a triangle ");
    }

    return 0;
}

