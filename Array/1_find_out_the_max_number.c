#include<stdio.h>
main()
{
	int a[50], i, size, max;
	
	printf("\nEnter size of array : ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\n Enter Element[%d]: ", i);
		scanf("%d",&a[i]);
	}

	for(i=0;i<size;i++)
	{
		printf("\n a[%d] :  %d",i, a[i]);
	}
	
	for(i=0;i<size;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	printf("\n Max Element : %d", max);

}
