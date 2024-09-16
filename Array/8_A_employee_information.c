#include<stdio.h>

struct employee
{
	int eno,age;
	char addr[20],name[20];
}emp;
main()
{
	printf("\n Enter the Employee number : ");
	scanf("%d",&emp.eno);
	printf("\n Enter the Employee name : ");
	scanf("%s",&emp.name);
	printf("\n Enter the Employee Address : ");
	scanf("%s",&emp.addr);
	printf("\n Enter the Employee age : ");
	scanf("%d",&emp.age);
	
	printf("\n Employee No : %d",emp.eno);	
	printf("\n Employee Name : %s",emp.name);
	printf("\n Employee Address : %s",emp.addr);
	printf("\n Employee No : %d",emp.age);
}
