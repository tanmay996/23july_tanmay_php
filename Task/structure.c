#include<stdio.h>
 
struct data
{
	int id;
}st;
int main()
{
	struct data st;
	printf("Enter number : ");
	scanf("%d",&st.id);
	printf("Number is %d",st.id);
}
