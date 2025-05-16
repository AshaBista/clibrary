//write a program to determine weather a number is divisible by 3 or 7.
#include<stdio.h>
int main()
{
	int num1;
	printf("\nEnter a number");
	scanf("%d",num1);
	
	if((num1%3==0)||(num1%7==0))
	{
		if((num1%3==0)&&(num1%7==0))
		{
			printf("%d is divisible only by 3",num1);
		}
		else
		{
			printf("%d is divisible only by 7",num1);
		}
	}
	else
	{
		printf("%d is divisible by both 3 and 7",num1);
	}
	return 0;
}
