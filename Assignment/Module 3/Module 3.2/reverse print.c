#include<stdio.h>

int main()
{
	int i,a,b,reminder,reverse=0,temp,no[10];
	printf("Enter value");
	scanf("%d",&a);
	printf("Enter a number :") ;
	scanf("%d",&b);
	for(i=0;i<a;i++)
	{
		no[i]=b%10;
		b/=10;

	}	
	for(i=0;i<a;i++)
	{
		printf("%d",no[i]);
		
	}
	
	// for(i=1;i<a;i++)
	// {
	// 	reminder=a%10;
	// 	reverse=reverse*10+reminder;
	// 	a/=10;
		

	// }
	// 	reverse=reverse*10+a;
	// printf("%d",reverse);
	
	
 }

