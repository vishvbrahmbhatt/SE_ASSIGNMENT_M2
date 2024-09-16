#include<stdio.h>

struct Student  
{
	int rollno;     
	char sname[30];
	
}stud1;

union Stude  
{
	int rollno;      
	char sname[30];

}stud2;

main()
{	
    printf("\n Structure:");
	printf("\n Enter a Rollno : ");
	scanf("%d",&stud1.rollno);
	printf("\n Enter Student's Name : ");
	scanf("%s",&stud1.sname);
	
	printf("\n Union:");
	printf("\n Enter a Rollno : ");
	scanf("%d",&stud2.rollno);
	printf("\n Enter Student's Name : ");
	scanf("%s",&stud2.sname);
	
	printf("\n Structure:");
	printf("\n Rollno : %d",stud1.rollno);
	printf("\n Name : %s",stud1.sname);\
	
	printf("\n Union:");
	printf("\n Rollno : %d",stud2.rollno);
	printf("\n Name : %s",stud2.sname);

}
