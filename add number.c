#include <stdio.h> //header file
int main()
{
	int Num1,Num2, result; //variable initialization 
	printf("Enter Num1:\n"); // \n help to break the line
	scanf("%d",&Num1);
	printf("\n");
	
	printf("Enter Num2:\n"); // \n help to break the line
	scanf("%d",&Num2);
	printf("\n");
	
	//operation or equation
	
	result = Num1 + Num2;
	
	//display
	printf("Addition =%d",result);
	return 0; //sucessfully close the program
	
	
}
