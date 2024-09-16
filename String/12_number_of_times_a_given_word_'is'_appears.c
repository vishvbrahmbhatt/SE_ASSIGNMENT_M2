#include <stdio.h>
#include <string.h>
main()
{
    char str[30],word[30],*p;
    int count = 0;

    printf(" Enter the string: ");
    gets(str);
	
    printf(" Enter the word to search for: ");
    gets(word);

    p = str;
    while ((p = strstr(p, word)) !='\0') 
	{
        count++;
        p++; 
    }

    printf("\n The word '%s' appears '%d' times in the string.", word, count);

}

