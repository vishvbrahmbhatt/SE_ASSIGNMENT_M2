#include <stdio.h>
 main()
  {
    char operator;
    int num1, num2, result;

    printf("\n\n\t Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);


    printf("\n\n\t Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (operator == '+') 
	{
        result = num1 + num2;
        printf("\n\n\t Result: %d + %d = %d\n", num1, num2, result);
    } else if (operator == '-') {
        result = num1 - num2;
        printf("\n\n\t Result: %d - %d = %d\n", num1, num2, result);
    } else if (operator == '*') {
        result = num1 * num2;
        printf("\n\n\t Result: %d * %d = %d\n", num1, num2, result);
    } else if (operator == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("\n\n\t Result: %d / %d = %d\n", num1, num2, result);
        } else {
            printf("\n\n\t Error: Division by zero is not allowed");
        }
    } else if (operator == '%') {
        if (num2 != 0) {
            result = num1 % num2;
            printf("\n\n\t Result: %d %% %d = %d\n", num1, num2, result);
        } else {
            printf("\n\n\t Error: Division by zero is not allowed ");
        }
    } else {
        printf("\n\n\t Error: Invalid operator");
    }

    return 0;
}

