#include <stdio.h>

 main() 
 {
    float originalBill, finalBill;
    const float SURCHARGE_RATE = 0.18;
    const float MINIMUM_BILL = 256.0;

    
    printf("\n\n\t Enter the original bill amount: ");
    scanf("%f", &originalBill);

    
    if (originalBill > 800) 
	{
        
        finalBill = originalBill + (originalBill * SURCHARGE_RATE);
    } 
	else 
	{
        finalBill = originalBill;
    }

    
    if (finalBill < MINIMUM_BILL) 
	{
        finalBill = MINIMUM_BILL;
    }

    
    printf("\n\n\t The final bill amount is: %.2f", finalBill);

    return 0;
}

