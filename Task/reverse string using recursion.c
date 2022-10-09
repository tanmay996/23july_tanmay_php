#include<stdio.h>
#include<string.h>
int reverse(char str[],int i,int size)
{
    char temp;
    temp = str[i];
    str[i]=str[size-i];
    str[size-i]=temp;
    if(i==size/2)
    {
        return 0;
    }
    reverse(str,i+1,size);
}
int main()
{
    int size;
    char str[100];
    printf("Enter a string : ");
    gets(str);
    size=strlen(str);
    reverse(str,0,size-1);                  //reverse function
    printf(" Reverse string is %s",str);
}