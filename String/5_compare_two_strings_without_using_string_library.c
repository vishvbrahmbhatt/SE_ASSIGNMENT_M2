#include<stdio.h>
main()
{
	char str1[10],str2[10];
	int i ,compare=0;
	
	printf("Enter a String1: ");
	scanf("%s",&str1);
	printf("Enter a String2: ");
	scanf("%s",&str2);
	
	for(i=0;str1[i]!='\0'&&str2[i]!='\0';i++)
	{
    	if(str1[i]!=str2[i])
		{
			compare=1;
			break;
		} 
    	
    }
    if(compare==0)  
	printf("String are Equel");
	    
	else 
	   printf("String are not Equel"); 	     
}

