#include<stdio.h>
int main()
{
	int *a,*b,no1,no2;
	printf("Enter two value");
	scanf("%d %d",&no1,&no2);
	a=&no1;
	b=&no2;
	printf("Addtion of %d and %d is %d",*a,*b,*a+*b);
}
