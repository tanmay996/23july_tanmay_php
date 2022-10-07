#include<stdio.h>
long int facto(int no)
{
	if(no<=1)
		return 1;
		else
			return no*facto(no-1);
		
}
int main()
{
	int no;
	printf("Enter number for factorial :");
	scanf("%d",&no);
	printf("Factorial of %d is %d",no,facto(no));

}
