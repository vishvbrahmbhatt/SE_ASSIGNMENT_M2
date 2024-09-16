#include <stdio.h>
main() 
{
    int i,choice, num1, num2;
    char *operations[] = {"Addition", "Subtraction", "Multiplication", "Division"};

    printf(" Simple Calculator\n");
    for (i = 0; i < 4; i++) {
        printf("%d. %s\n", i + 1, operations[i]);
    }
    printf("\n Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: \n");
    scanf("%d %d", &num1, &num2);

    switch (choice) {
        case 1:
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case 3:
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case 4:
            printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
            break;
        default:
            printf("Invalid choice!\n");
    }

}


