#include<stdio.h>
#include<string.h>
main()
{
     char str[50],large[20],small[10];
     
     printf("Enter a String: ");
     gets(str);
     
     int max=0,min=50,len=0;
     char word[50];
     int i=0,j=0;
     
    while(1)
	{
		while(str[i]!=' '&&str[i]!='\0')
		{
			word[j++]=str[i++];
		}
		word[j]='\0';
		int len=strlen(word);
		
		if(len>max)
		{
			max=len;
			strcpy(large,word);
		}
		
		if(len<min)
		{
			min=len;
			strcpy(small,word);
		}
		j=0;
		if(str[i]=='\0')
		{
			break;
		}
		i++;
		
    }  
	printf("\n Largest word: %s", large);
    printf("\n Smallest word: %s", small);    
    	
}
