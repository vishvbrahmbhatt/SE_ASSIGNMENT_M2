#include <stdio.h>
main() 
{
    char students[5][20];
    int i;

    printf("Enter names of 5 students: \n");
    for (i = 0; i < 5; i++) 
	{
       printf("Student %d: ", i + 1);
       scanf("%s", students[i]); 
    }

    printf("\nNames of students:\n");
    for (i = 0; i < 5; i++) 
	{
       printf("%d. %s\n", i + 1, students[i]);
    }

}
