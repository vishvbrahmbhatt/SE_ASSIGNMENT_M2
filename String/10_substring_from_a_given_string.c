#include <stdio.h>
int main() 
{
   char str[50];
   int i, start, end;

   printf("Enter a string: ");
   gets(str);

   printf("Enter start index: ");
   scanf("%d", &start);

   printf("Enter end index: ");
   scanf("%d", &end);

   printf("Extracted substring: ");
   
   for (i = start; i <= end; i++) 
   {
        printf("%c", str[i]);
   }
   printf("\n");
}
