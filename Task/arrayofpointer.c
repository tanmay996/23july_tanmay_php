#include<stdio.h>
int main()
{
	int a[5],i;
	int *ptr;
	ptr =&a;
	for(i=0;i<5;i++)
	{
		scanf("%d",&*ptr++);
	}
	ptr=&a[0];
	for(i=0;i<5;i++)
	{
		printf("%d",*ptr++);
	}
	
}
