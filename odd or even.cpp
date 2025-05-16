//write a program to determine weather the program is odd or even.
#include<stdio.h>
int main()
{
	int num1;
	printf("\nEnter a number");
	scanf("%d",&num1);
	
	if(num1 %2==0)
	{
		printf("\nEven number");
		
	}  
	else 
	{
		printf("\nodd number");
		
	}
	return 0;
	
}