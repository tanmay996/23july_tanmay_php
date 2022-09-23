#include<stdio.h>
int main()
{
	int x;
	printf("Enter your year");
	scanf("%d",&x);
	if(x%4==0)
	{
	printf("%d is leap year",x);	
	}
	else
	{
		printf("%d is not leap year",x);
	}
}
