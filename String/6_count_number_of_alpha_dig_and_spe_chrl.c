#include <stdio.h>
int main()
{
    char str[30];
    int alphabets = 0, digit = 0,sc=0;
    int i = 0;

    printf("Enter any string: ");
    scanf("%s",&str);

    while (str[i] != '\0') 
	{
        
        if ((str[i] >= 'a' && str[i]<= 'z'||str[i] >= 'A' && str[i]<= 'Z')) 
            alphabets++;

        else if((str[i]>= '0' && str[i]<= '9')) 
            digit++;
        else if((str[i]>=' '))
             sc++;
		    
            
        i++;
    }

    printf("\n Number of Alphabets in the string: %d", alphabets);
    printf("\n Number of Digit in the string: %d", digit);
    printf("\n Number of Special Character in the string: %d",sc);
 
}

