// WAP TO FIND A CIRCUMFERENCE OF RECTANGLE.
#include<stdio.h>
main()
{
	int l,w;
	float Circumference;
	printf("\n Enter the length of Rectangle : ");
	scanf("%d", &l);
	printf("\n Enter the Width of Rectangle : ");
	scanf("%d", &w);
	Circumference=2*(l+w);
	printf("\n Circumference of Rectangle is %.2f",Circumference);
}
