//WAP to find simple interest 
#include<stdio.h>
int main()
{
	float x,y,si,z,l,m;
	printf("Calculate Simple interest \n");
	printf("Enter amount");
	scanf("%f",&x);
	printf("Enter rate");
	scanf("%f",&y);
	printf("Enter no. of year");
	scanf("%f",&z);
	si = (x*y*z)/100;
	printf("simple intrest is %f \n ",si);
	l = si*y/100;
	m=si+l+l;
	printf("Compound interest is %f",m);

	
	
	
}
