#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,no,i;
	printf("Enter value of size :-");
	scanf("%d",&no);
	ptr=(int*)calloc(no,sizeof(int));
	for(i=0;i<no;i++)
	{
		printf("value[%d]",i+1);
		scanf("%d",&ptr[i]);
	}
	
	printf("Enter new value of size :-");
	scanf("%d",&no);
	ptr=(int*)realloc(ptr,no*sizeof(int));
	for(i=0;i<no;i++)
	{
		printf("value[%d]",i+1);
		scanf("%d",&ptr[i]);
	}
	free(ptr);
	

}
