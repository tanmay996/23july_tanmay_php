#include<stdio.h>
int main()
{
	int a=3,b=5;
	printf("Enter \n");
	printf("Before swap %d , %d \n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swap %d , %d",a,b);
	
}
