#include <stdio.h>

int main() 
{
    int mathMarks, phyMarks, chemMarks;
    int totalAllThree, totalMathPhy;

    
    printf("\n\n\t Enter marks obtained in Physics: ");
    scanf("%d", &phyMarks);
    printf("\n\n\t Enter marks obtained in Chemistry: ");
    scanf("%d", &chemMarks);
    printf("\n\n\t Enter marks obtained in Mathematics: ");
    scanf("%d", &mathMarks);

    totalAllThree = mathMarks + phyMarks + chemMarks;
    totalMathPhy = mathMarks + phyMarks;

    if ((mathMarks >= 65 && phyMarks >= 55 && chemMarks >= 50 && totalAllThree >= 190) ||
        (totalMathPhy >= 140)) 
		{
			
        printf("\n\n\t The candidate is eligible ");
    }
	 else 
	{
        printf("\n\n\t The candidate is not eligible ");
    }

    return 0;
}

