
#include<stdio.h>
int main()
{
	int i[5],j;
	printf("Enter 5 digit value");
	scanf("%d",&i[5]);
	for(j=1;j<=5;j++)
	{
		if(i[0]>i[j])
		{
			printf("%d is max",i[0]);
		}
		else
		{
			printf("%d is max",i[j]);
		}
	}
	
}
