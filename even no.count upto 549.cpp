//wap to count the total number of even upto 549.
#include<stdio.h>
int main()
{
	int i;
	int count;
	printf("\nEnter a number");
	{
		for(i=2;i<=549;i++)
		{
			if(i%2==0)
			{
				printf("%d\n",i);
				count=count+1;
			}
		}
		printf("total even number upto 549:%d\t",count);
	}
	return 0;
}