#include <stdio.h>

 main() 
 {
    float costPrice, sellingPrice, profitLoss;

    
    printf("\n\n\t Enter the cost price of the item: ");
    scanf("%f", &costPrice);
    
	printf("\n\n\t Enter the selling price of the item: ");
    scanf("%f", &sellingPrice);

    
    profitLoss = sellingPrice - costPrice;

    
    if (profitLoss > 0) 
	{
        printf("Profit: %.2f", profitLoss);
    }
	 else if (profitLoss < 0) 
	 {
        printf("Loss: %.2f", -profitLoss);
    }
	 else 
	{
        printf("No profit, no loss (Break-even)");
    }

    return 0;
}

