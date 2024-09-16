#include <stdio.h>

 main() 
 {
    char ch;

    printf("\n\n\t Enter an alphabet: ");
    scanf(" %c", &ch);

    
    switch (ch) 
	{
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("\n\n\t %c is a vowel.", ch);
            break;
        default:
        
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
			{
                printf("\n\n\t %c is a consonant.", ch);
            }
			 else 
			 {
                printf("%c is not an alphabet", ch);
            }
            break;
    }

    return 0;
}

