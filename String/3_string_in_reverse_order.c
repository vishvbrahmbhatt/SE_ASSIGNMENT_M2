#include<stdio.h>
#include<string.h>
main()
{
	char str[10];
	int i,len;
	
	printf(" Enter a string : ");
	scanf("%s",&str);
	len=strlen(str);
	
	i=len;
	printf("\n String in Reverse order");
	while(i>=0)
	{
		printf("\n %c ",str[i]);
		i--;
	}
	
	

}
