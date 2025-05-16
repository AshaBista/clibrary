// write a program to determie weather the number is positive or negative.
#include<stdio.h>
int main()
{
	int num2;
	printf("\nEnter a number");
	scanf("%d",&num2);
	
	if (num2>0)
	{
		printf("\nPositive number");
	}
	else if (num2<0)
	 {
		printf("\nNegative number");
	}
	return 0;
}