#include<stdio.h>
#include<math.h>
int main() 
{
    float principal,time,rate,compound_interest;    
    printf("Enter the principal (Amount), Time, and Rate::\n");
    scanf("%f%f%f", &p, &t, &r);
    CI = p * (pow((1 + r / 100), t));
    printf("\nCompound Interest = %f\n", CI);
}
