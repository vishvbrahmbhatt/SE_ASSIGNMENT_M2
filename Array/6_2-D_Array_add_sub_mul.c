#include <stdio.h>
main() 
{
    int m1[2][2],m2[2][2],rs,cs,result[2][2],i,j,choice;

    printf(" Enter row size  for array : ");
	scanf("%d",&rs);
	printf("\n Enter col size  for array : ");
	scanf("%d",&cs);
	
	printf("Enter elements of first matrix:\n");
    for (i = 0; i < rs; i++)
        for (j = 0; j < cs; j++)
            scanf("%d", &m1[i][j]);

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < rs; i++)
        for (j = 0; j < cs; j++)
            scanf("%d", &m2[i][j]);

    printf("Enter your choice:\n1. Addition\n2. Subtraction\n3. Multiplication\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            for (i = 0; i < rs; i++)
                for (j = 0; j < cs; j++)
                    result[i][j] = m1[i][j] + m2[i][j];
            break;
        case 2:
            for (i = 0; i < rs; i++)
                for (j = 0; j < cs; j++)
                    result[i][j] = m1[i][j] - m2[i][j];
            break;
        case 3:
            for (i = 0; i < rs; i++)
                for (j = 0; j < cs; j++)
                    result[i][j] = m1[i][0] * m2[0][j] + m1[i][1] * m2[1][j];
            break;
    }

    printf("Resultant Matrix:\n");
    for (i = 0; i < rs; i++) {
        for (j = 0; j < cs; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }

    return 0;
}

