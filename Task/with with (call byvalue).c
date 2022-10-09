#include<stdio.h>
int data(int no)
{
	printf("Enter number : ");
	scanf("%d",&no);
	printf("Number is %d \n",no);
	no++;
	printf("After increment number is %d",no);
}
int main()
{
	int no;
	
	data(no);
	
}
