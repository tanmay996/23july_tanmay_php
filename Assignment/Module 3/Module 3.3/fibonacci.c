// WAP to print Fibonacci series up to given numbers
#include<stdio.h>
int main()
{
	int x=0,y=1,i,n,t;
	printf("Enter Number");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		t=x+y;
		x=y;
		y=t;
		printf("%d \n",t);
	}


	
}
