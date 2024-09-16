#include <stdio.h>
 main() 
 {
 	
    int marks;

    printf("\n\n\t Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 40) 
	{
        printf("\n\n\t Pass");
    } 
	
	else 
	{
        printf("\n\n\t Fail");
    }

    return 0;
}

