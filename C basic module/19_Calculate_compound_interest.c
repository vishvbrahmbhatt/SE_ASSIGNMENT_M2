#include<stdio.h>
#include<math.h>
int main() 
{
    float principal,time,rate,
	compound_interest;    
    printf("\n Enter the principal :" );
    printf("\n Enter the  Time : ");
    printf("\n Enter the Rate : ");
    scanf("%f",&principal);
    scanf("%f",&time);
    scanf("%f",&rate);
    compound_interest = principal * (pow((1 + rate / 100), time));
    printf("\n Compound Interest = %f", compound_interest);
}
