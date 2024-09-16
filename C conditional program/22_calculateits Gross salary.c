#include <stdio.h>
 main() 
 {
    float basicSalary, hra, da, grossSalary;

    printf("\n\n\t Enter the basic salary of the employee: ");
    scanf("%f", &basicSalary);

    
    if (basicSalary <= 10000) 
	{
        hra = 0.20 * basicSalary;
        da = 0.80 * basicSalary;
    } 
	else if (basicSalary <= 20000) 
	{
        hra = 0.25 * basicSalary;
        da = 0.90 * basicSalary;
    }
	 else 
	 {
        hra = 0.30 * basicSalary;
        da = 0.95 * basicSalary;
    }

    grossSalary = basicSalary + hra + da;

    
    printf("\n\n\t Basic Salary: %.2f", basicSalary);
    printf("\n\n\t HRA: %.2f", hra);
    printf("\n\n\t DA: %.2f", da);
    printf("\n\n\t Gross Salary: %.2f", grossSalary);

    return 0;
}

