#include <stdio.h>
main() 
{
    char str1[30],str2[30],str3[60]; 
    printf(" Enter the first string: ");
    gets(str1);
    
    printf(" Enter the second string: ");
    gets(str2);
    
    int i = 0, j = 0;

    while (str1[i] != '\0') 
	{
        str3[j++] = str1[i++];
    }

    i = 0; 
    while (str2[i] != '\0') 
	{
        str3[j++] = str2[i++];
    }
    
    str3[j] = '\0';

    printf("\n Combined string: %s", str3);

}

