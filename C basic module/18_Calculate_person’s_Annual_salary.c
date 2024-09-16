#include<stdio.h>
main()
{
	float monthly_salary,annual_salary;
	printf(" Enter  your salary");
	scanf("%f",&monthly_salary);
    annual_salary=monthly_salary*12;
	printf("\n your annual salary is: $%.2f",annual_salary);
}
