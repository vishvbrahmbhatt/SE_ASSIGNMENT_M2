#include <stdio.h>
main() 
{
    int i,numbers[5];

    for (i = 0; i < 5; i++) 
	{
	  printf("Enter 5 numbers: ");
      scanf("%d", &numbers[i]);
    }

    printf("\nEven and Odd Numbers:\n");
    for (i = 0; i < 5; i++) 
	{
       if (numbers[i] % 2 == 0) 
         printf("%d is Even\n", numbers[i]);
 
       else 
          printf("%d is Odd\n", numbers[i]);

    }

}

