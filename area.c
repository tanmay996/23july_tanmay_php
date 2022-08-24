// WAP to find area of circle, rectangle and triangle
#include<stdio.h>
int main()
{	

	float a,b,c,r,l,w,x,y;
	const float pi = 3.14;
	
	printf("Enter radius of circle \n:");
	scanf("%f",&r);

	a = pi * r * r;
	printf("Area of circle is %f \n",a);
	
	printf("Enter length and witdh of rectangle \n");
	scanf("%f %f",&l,&w);
	
	b = l * w;
	printf("Area of square is %f \n ",b);
	
	printf("Enter hight and base of triangle \n");
	scanf("%f %f",&x,&y);
	
	c = x*y*0.5;
	printf("Area of triangle is %f \n",c);
	
return 0;
}
