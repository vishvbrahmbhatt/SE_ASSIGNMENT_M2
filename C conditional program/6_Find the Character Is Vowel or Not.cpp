#include <stdio.h>
 main()
  {
  	
    char ch;

    printf("\n\n\t Enter a character: ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
		 {
        printf("\n\n\t %c is a vowel ", ch);
    }
	 else 
	{
        printf("\n\n\t %c is not a vowel ", ch);
    }

    return 0;
}

