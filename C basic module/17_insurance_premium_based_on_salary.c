#include<stdio.h>
main()
{
	float salary,premium;
	printf(" Enter  your salary");
	scanf("%f",&salary);
	//Assumed the premium is 6% of salary.
	premium=salary*0.06;
	printf("\n your insurance premium is: $%.2f",premium);
	

	
}
