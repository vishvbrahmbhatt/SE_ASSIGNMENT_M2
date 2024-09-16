#include <stdio.h>
 main() 
 {
    float temperature;

    printf("\n\n\t Enter temperature in Celsius: ");
    scanf("%f", &temperature);

    
    if (temperature < 0) 
	{
        printf("\n\n\t Freezing weather ");
    } 
	else if (temperature >= 0 && temperature <= 10) 
	{
        printf("\n\n\t Very Cold weather");
    } 
	else if (temperature > 10 && temperature <= 20) 
	{
        printf("\n\n\t Cold weather");
    } 
	else if (temperature > 20 && temperature <= 30) 
	{
        printf("\n\n\t Normal in Temp");
    } 
	else if (temperature > 30 && temperature <= 40) 
	{
        printf("\n\n\t It's Hot");
    } 
	else 
	{
        printf("\n\n\t It's Very Hot");
    }

    return 0;
}

