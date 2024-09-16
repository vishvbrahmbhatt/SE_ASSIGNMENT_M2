#include <stdio.h>
main() 
{
    char str[50];
    int i, length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i=0;str[i]!='\0';i++) 
	{
        length++;
    }

    printf("\n Length of the string: %d", length);
}

