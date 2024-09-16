#include<stdio.h>
main()
{
	float salary,insurance_primium,loan_instolment,deduction,reamaining_salary;
	printf(" Enter your salary: $");
	scanf("%f",&salary);
	insurance_primium=salary*0.10;
	loan_instolment=salary*0.10;
	deduction=insurance_primium+loan_instolment;
	reamaining_salary=salary-deduction;
	printf("\n insurance_primium are: %.2f",insurance_primium);
	printf("\n loan_instolment are: %.2f",loan_instolment);
	printf("\n deduction are: %.2f",deduction);
	printf("\n reamaining salary are: %.2f",reamaining_salary);
	
	
}
