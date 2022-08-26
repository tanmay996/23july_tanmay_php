//Write a C program to find maximum between three numbers.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter value of A \n");
	scanf("%d",&a);
	printf("Enter value of B \n");
	scanf("%d",&b);
	printf("Enter value of C \n");
	scanf("%d",&c);
	if(a<b && b<c) 
	{
		if(b>c)
		{
		printf("Value of B %d is max",b);
		}
		else
		{
		printf("Value of C %d is max",c);
		}
	}
	else
	{
	printf("Value of A %d is max",a);
	}
}
