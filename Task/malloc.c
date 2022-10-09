#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,no,i;
	printf("Enter value of size :-");
	scanf("%d",&no);
	ptr=(int*)malloc(no*sizeof(int));
	for(i=0;i<no;i++)
	{
		printf("No [%d]",i+1);
		scanf("%d",&ptr[i]);
	}
	for(i=0;i<no;i++)
	{
		printf("No[%d] \t %d \n",i+1,ptr[i]);
		
	}
}
