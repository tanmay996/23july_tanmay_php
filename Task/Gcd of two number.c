#include<stdio.h>
int main()
{
	int no1,no2,i=1,gcd;
	printf("Enter 2 value :");
	scanf("%d %d",&no1,&no2);
	if(no1>no2)
	{
	
	for(i=1;i<=no1;i++)
		{
			
		if(no1%i==0&&no2%i==0) //6/1 6/2 6/3 6/6
							//12/1 12/2 12/3 12/4 /12/6
			{
				gcd=i;			
			}
		}
	}	
	else
	{
	
	for(i=1;i<=no2;i++)
	{
			
		if(no1%i==0&&no2%i==0) 
			{
				gcd=i;		
			}
	}
	}	
	printf("gcd is %d",gcd);
	
}
