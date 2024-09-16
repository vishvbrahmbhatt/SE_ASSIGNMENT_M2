#include<stdio.h>

struct employee
{
	int eno,age;
	char addr[20],name[20];
}emp[5];
main()
{
	int i;
	i=0;
	while(i<5)
	{
		printf("\n Enter Employee %d Information",i+1);
	    printf("\n Enter the Employee number : ");
	    scanf("%d",&emp[i].eno);
	    printf("\n Enter the Employee name : ");
	    scanf("%s",&emp[i].name);
	    printf("\n Enter the Employee Address : ");
	    scanf("%s",&emp[i].addr);
	    printf("\n Enter the Employee age : ");
	    scanf("%d",&emp[i].age);
	    i++;
    }
	for(i=0; i<5; i++)
	{
		printf("\n Infotmation of Employee %d ",i+1);
	   printf("\n Employee No : %d",emp[i].eno);	
	   printf("\n Employee Name : %s",emp[i].name);
       printf("\n Employee Address : %s",emp[i].addr);
	   printf("\n Employee No : %d",emp[i].age);
    }
}

