#include<stdio.h>
int main()
{
    int i;
    char str[100];
    printf("Enter string");
    scanf("%s",&str);
    for(i=0;str[i]!='\0';++i);
    printf("%d",i);
}