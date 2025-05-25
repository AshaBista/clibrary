//wap to find the first 50 odd number.
#include<stdio.h>
int main()
{
	int i;
	printf("\nEnter a number");
	
	for(i=1;i<=100;i++)
	{
		if(i%2==1)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}