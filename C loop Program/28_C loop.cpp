#include <stdio.h>
 main() 
 {
    int terms, i = 1;
    int current = 1;
    int previous = 1;


    printf("\n\n\t Enter the number of terms to generate: ");
    scanf("%d", &terms);

    if (terms >= 1) printf("%d ", current); 
    if (terms >= 2) printf("%d ", 2);       
    if (terms >= 3) printf("%d ", 3);       

    current = 3; 
    previous = 3;

    while (i < terms - 3) {
        current = previous * 3;
        printf("\n\n\t %d ", current);
        previous = current;
        i++;
    }

    printf("\n\n\t :");
    return 0;
}

