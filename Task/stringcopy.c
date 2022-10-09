#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	printf("Enter String1 : ");
	gets(str1);
	printf("Enter String2 : ");
	gets(str2);
	strcpy(str1,str2);
	printf("%s",str1);
	
}
