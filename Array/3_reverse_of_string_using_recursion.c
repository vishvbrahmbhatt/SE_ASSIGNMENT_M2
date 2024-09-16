#include <stdio.h>
void reverse_string(char*str) 
{
    if (*str == '\0')
    return;
    reverse_string(str + 1);
    printf("%c", *str);
}

main() 
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Reverse: ");
    reverse_string(str);

}
