 #include<stdio.h>
int main()
{

char y,x,G,Q;
int a,b,result;

up:
printf("\n Enter value");	
scanf("%d",&a);
scanf("%c ",&x);
// printf("Enter value of b\n");
scanf("%d",&b);
 
// printf("Enter your choice: \n");

switch(x)
{

	case '+':	
		result=a+b;
		break;
	case '-':
		result=a-b;
		break;
	case '*':
		result=a*b;
		break;
	case '/':
		result=a/b;
		break;
		
}
	

	printf("Result = %d",result);
	
	printf("\n For stop calci Enter '0' ");
	scanf("%d",&y);
	if(y!=0)
	{ 
	goto up;
	}
	else
	{
	return 0;
	}	
		
	
}		
