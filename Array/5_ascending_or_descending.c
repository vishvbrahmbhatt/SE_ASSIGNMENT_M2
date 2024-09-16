
#include <stdio.h>
main() 
{
    int i,j,size, choice,temp;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter %d values:\n", size);
    for ( i = 0; i < size; i++) 
	{
        printf("Value %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Sort array in:\n");
    printf("1. Ascending Order\n");
    printf("2. Descending Order\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) 
	{
    
        for (i = 0; i < size - 1; i++) 
		{
            for ( j = i + 1; j < size; j++) 
			{
                if (array[i] > array[j]) 
				{
                     temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
        printf("Array in Ascending Order:\n");
    } 
	else if (choice == 2) 
	{
        for (i = 0; i < size - 1; i++) 
		{
            for (j = i + 1; j < size; j++) 
			{
                if (array[i] < array[j]) 
				{
                     temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
        printf("Array in Descending Order:\n");
    } 
	else 
	{
        printf("Invalid choice!\n");
        return 1;
    }

    for ( i = 0; i < size; i++) 
	{
        printf("%d ", array[i]);
    }
    printf("\n");
}

