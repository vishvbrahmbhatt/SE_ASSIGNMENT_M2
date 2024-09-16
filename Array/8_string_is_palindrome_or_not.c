#include<stdio.h>
#include<string.h>
main() 
{
    char str[100];
    int i,length,Palindrome;

    printf("Enter a string: ");
    scanf("%s", str);

    length=strlen(str);

    for (i = 0; i < length / 2; i++) 
    {
       char temp = str[i];
       str[i] = str[length - i - 1];
       str[length - i - 1] = temp;
    }

        Palindrome = 1;
    for (i = 0; i < length / 2; i++)  
	{
      if (str[i] != str[length - i - 1])  
	  {
        Palindrome = 0;
        break;
      }
    }

    printf("Reversed string: %s\n", str);
    if (Palindrome)  
	{
      printf("The string is a palindrome.\n");
    } 
    else 
	{
      printf("The string is not a palindrome.\n");
    }

}

