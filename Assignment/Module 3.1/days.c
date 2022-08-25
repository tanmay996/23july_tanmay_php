#include<stdio.h>
int main()
{
	float x,k,l,y;
	printf("Enter number of year \n");
	scanf("%f",&x);
	k = x*365;
	printf("%f year have %f Days \n",x,k);
	
	printf("Enter days \n");
	scanf("%f",&y);
	l = y / 365;
	printf("%f year have %f days ",l,y);
}
