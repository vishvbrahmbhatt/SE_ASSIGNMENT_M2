#include<stdio.h>
main()
{
	int a, b, c;
	
	printf("\n Enter any two numbers  : ");
	scanf("%d %d", &a, &b);
	
	printf("\n Before Swapping ----------------");
	printf("\n a = %d", a);
	printf("\n b = %d", b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\n After Swapping ----------------");
	printf("\n a = %d", a);
	printf("\n b = %d", b);
}
