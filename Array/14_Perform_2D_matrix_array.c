#include<stdio.h>
main()
{
    int i,j,r,c,sum;
    
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    int matrix[r][c];

    printf("Enter matrix elements:\n");
    for ( i = 0; i < r; i++) 
	{
        for (j = 0; j < c; j++) 
		{
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("\nMatrix:\n");
    for ( i = 0; i < r; i++) 
	{
        for ( j = 0; j < c; j++) 
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
	sum = 0;
    for (i = 0; i < r; i++) 
	{
        for ( j = 0; j < c; j++) 
		{
            sum += matrix[i][j];
        }
    }
    printf("\nSum of matrix elements: %d", sum);
}

