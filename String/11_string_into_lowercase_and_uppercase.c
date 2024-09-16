#include<stdio.h>
#include<string.h>
main()
{
	char str[10];
	
	printf("Enter a String : ");
    scanf("%s",&str);
    
	printf("\n String in Lower Case : %s", strlwr(str));
	printf("\n String in Upper Case : %s", strupr(str));

}
