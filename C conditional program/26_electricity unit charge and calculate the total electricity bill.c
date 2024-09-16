#include <stdio.h>
 main() 
 {
    int units;
    float billAmount, surcharge, totalBill;

    printf("\n\n\t Enter the electricity units consumed: ");
    scanf("%d", &units);

    if (units <= 50) 
	{
        billAmount = units * 0.50;
    }
	 else if (units <= 150) 
	 {
        billAmount = (50 * 0.50) + ((units - 50) * 0.75);
    }
	 else if (units <= 250) 
	 {
        billAmount = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    }
	 else 
	 {
        billAmount = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }

    surcharge = billAmount * 0.20;
    totalBill = billAmount + surcharge;

    printf("\n\n\t The total electricity bill is: Rs. %.2f", totalBill);

    return 0;
}

