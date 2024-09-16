#include <stdio.h>
main() 
{
    char str[30];
    printf(" Enter a string: ");
    gets(str);

    int length = 0;
    while (str[length] != '\0') 
    {
       length++;
    }
    printf("\n Maximum number of characters: %d", length);

}
