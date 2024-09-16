#include<stdio.h>
main()
{
	int a, b, c;
    printf(" Enter number1: ");
    scanf("%d",&a);
    
    printf(" Enter number2: ");
    scanf("%d",&b);
	
	printf(" Before Swapping ----------------");
	printf("\n a = %d", a);
	printf("\n b = %d", b);
	
	a=a*b;
	b=a/b;
	a=a/b;
	
	printf("\n After Swapping ----------------");
	printf("\n a = %d", a);
	printf("\n b = %d", b);
}
