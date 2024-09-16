#include <stdio.h>
main() 
{
    int i,num[5];

   printf("Enter 5 numbers: \n");
   for (i = 0; i < 5; i++) 
   {
    scanf("%d", &num[i]);
   }

   printf("Numbers in reverse order: ");
   for (i = 4; i >= 0; i--) 
   {
    printf("%d ", num[i]);
   }

}
