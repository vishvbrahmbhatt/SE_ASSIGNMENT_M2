#include<stdio.h>

struct employee  
{
	int eid;     
	char ename[30];
	
}emp1;

union employ  
{
	int eid;      
	char ename[30];

}emp2;

main()
{	
    printf("\n Structure:");
	printf("\n Enter a Employee Id : ");
	scanf("%d",&emp1.eid);
	printf("\n Enter Employee's Name : ");
	scanf("%s",&emp1.ename);
	
	printf("\n Union:");
	printf("\n Enter a Employee Id : ");
	scanf("%d",&emp2.eid);
	printf("\n Enter Employee's Name : ");
	scanf("%s",&emp2.ename);
	
	printf("\n Structure:");
	printf("\n EId : %d",emp1.eid);
	printf("\n EName : %s",emp1.ename);
	
	printf("\n Union:");
	printf("\n EId : %d",emp2.eid);
	printf("\n EName : %s",emp2.ename);

}
