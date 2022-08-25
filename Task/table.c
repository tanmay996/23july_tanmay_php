#include<stdio.h>
int main()
{
	int i=1,x,k;
	printf("Enter any number ");
	scanf("%d",&x);
	tanmay:
if(i<=10)	
	{
	
	k=x*i;
	printf("\n%d*%d=%d",x,i,k);
	i++;
	}
	goto tanmay;

}
