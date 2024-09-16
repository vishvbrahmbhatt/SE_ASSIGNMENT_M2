#include <stdio.h>
 main() 
 {
    char ch;

    printf("\n\n\t Enter a character: ");
    scanf("%c", &ch);

    
    if (ch >= 'A' && ch <= 'Z') 
	{
        printf("\n\n\t The character is an Uppercase letter");
    }
    
    else if (ch >= 'a' && ch <= 'z') 
	{
        printf("\n\n\t The character is a Lowercase letter");
    }
    
    else if (ch >= '0' && ch <= '9') 
	{
        printf("\n\n\t The character is a Digit");
    }
    
    else
	 {
        printf("\n\n\t The character is a Special character");
     }

    return 0;
}

