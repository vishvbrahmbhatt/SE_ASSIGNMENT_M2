#include<stdio.h>
#include<string.h>
main()
{
    char str1[10],str2[10];
	
    printf("Enter a String : ");
    scanf("%s",&str1);
    printf("\n Orignal String : %s", str1);
	strcpy(str2, str1);
	printf("\n copy String : %s", str2);
	
}

