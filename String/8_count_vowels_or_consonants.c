#include <stdio.h>
int main()
{
    char str[30];
    int vowels = 0, consonants = 0;
    int i = 0;

    printf("Enter any string: ");
    scanf("%s",&str);

    while (str[i] != '\0') 
	{
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
            vowels++;
            
		else if ((ch >= 'a' && ch <= 'z')) 
            consonants++;
            
        i++;
    }
    while (str[i] != '\0') 
	{
        char ch = toupper(str[i]);
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
            vowels++;
            
		else if ((ch >= 'A' && ch <= 'Z')) 
            consonants++;
            
        i++;
    }

    printf("\n Number of Vowels in the string: %d", vowels);
    printf("\n Number of Consonants in the string: %d", consonants);
 
}

