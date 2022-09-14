#include<stdio.h>
int main()
{
	int i,a[5];
	printf("Enter 5 value");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Addition of last two value %d",a[0]+a[4]);
	
}
