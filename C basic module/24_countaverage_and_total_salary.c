#include<stdio.h>

main()
{
	char e1[10],e2[10],e3[10],e4[10],e5[10];
	float s1,s2,s3,s4,s5,total,avrage_salary;
	printf("\n Enter employees name : ");
	scanf("%s",&e1);
	printf("\n Enter employees salary : ");
	scanf("%f",&s1);
	printf("\n Enter employees name : ");
	scanf("%s",&e2);
	printf("\n Enter employees salary : ");
	scanf("%f",&s2);
	printf("\n Enter employees name : ");
	scanf("%s",&e3);
	printf("\n Enter employees salary : ");
	scanf("%f",&s3);
	printf("\n Enter employees name : ");
	scanf("%s",&e4);
	printf("\n Enter employees salary : ");
	scanf("%f",&s4);
	printf("\n Enter employees name : ");
	scanf("%s",&e5);
	printf("\n Enter employees salary : ");
	scanf("%f",&s5);
	total=s1+s2+s3+s4+s5;
	avrage_salary=total/5;
	printf("\n Total salary : %.2f",total);
	printf("\n Avrage salary : %.2f",avrage_salary);
}
