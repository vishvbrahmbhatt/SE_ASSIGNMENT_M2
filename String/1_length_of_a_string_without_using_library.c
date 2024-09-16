#include<stdio.h>
main()
{
	char str[10];
	int i, count=0;
	
	printf(" Enter a string : ");
	scanf("%s",&str);
	
	for(i=0;str[i]!='\0';i++)
	{
		printf("\n %c", str[i]);
		count++;
	}
	
	printf("\n Length of the String : %d", count);
}
