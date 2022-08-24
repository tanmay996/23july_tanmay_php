#include<stdio.h>
int main()
{
	float x;
	printf("Enter your marks \n");
	scanf("%f",&x);
	if (x>35 && x<=50)
	{
		if(x>50 && x<=60)
		{
			if(x>60 && x<=75)
			{
				if(x>75)
				printf("First class");
				
			}
			else
			{
				printf("Distinction");
			}
			
		}
		else
		{
		printf("Second class");
		}
		else
		{
		printf("Pass class");
		}
	}	
	else
	{
		printf("Fail");
	}
}
	
		
