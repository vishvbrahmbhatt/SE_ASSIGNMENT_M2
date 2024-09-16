#include <stdio.h>
main() 
{
    int i,j,num[5],temp;

    
    for (i=0;i<5;i++) 
	{
		printf("Enter numbers %d: ",i+1);
        scanf("%d", &num[i]);
    }

    for (i=0;i<4;i++) 
	{
       for (j=0;j<4-i;j++) 
	   {
          if (num[j] > num[j+1]) 
		  {
            temp = num[j];
            num[j] = num[j + 1];
            num[j + 1] = temp;
          }
    }
}

         printf("Sorted numbers in ascending order: ");
         for (i = 0; i < 5; i++) 
		 {
            printf("%d ", num[i]);
         }

}

