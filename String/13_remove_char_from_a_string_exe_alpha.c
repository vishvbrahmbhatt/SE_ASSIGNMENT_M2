#include <stdio.h>
#include <string.h>
main() 
{
    char str1[50],str2[50];
    int i,j = 0;

    printf("Enter the string: ");
    gets(str1);
    
    for (i = 0; str1[i] != '\0'; i++)
	 {
        if (isalpha((unsigned char)str1[i])) {
            str2[j++] = str1[i];
        }
    }
    str2[j] = '\0';

    printf("String after removing non-alphabetic characters: %s\n",str2);

    return 0;
}

