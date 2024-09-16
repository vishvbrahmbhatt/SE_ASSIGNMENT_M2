#include <stdio.h>
main() 
{
    int i,num[5],sum = 0;

    
    for(i=0;i<5;i++) 
	{
	  printf(" Enter numbers %d: ",i+1);
      scanf("%d", &num[i]);
      sum+=num[i]; 
    }
    printf("\n Sum of array elements: %d", sum);

}

