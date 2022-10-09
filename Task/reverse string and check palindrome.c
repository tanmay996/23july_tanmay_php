#include<stdio.h>
#include<string.h>
int main()
{
    
    
        int i,len;
        char str[100],temp,str1[100];

        printf("Enter a string ");
        gets(str);
        len=strlen(str);
        
        for(i=0;i<len/2;i++)
        {
            temp=str[i];
            str[i]=str[len-i-1];
            str[len-i-1]=temp;
        }
    printf("Reverse string is : %s \n",str);
    i=0;
    len-=1;
    while (len >= 0)
    {
        if (str[i++] != str[len--]) 
        {
            printf("%s is not a palindrome\n", str);
            return 0;
           
        }
    }
     printf("%s is a palindrome\n", str);
        }
