#include<stdio.h>
#include<string.h>
int main()
{
    
    
        int i,len;
        char str[100];
        printf("Enter a string ");
        scanf("%s",&str);

        len=strlen(str);

        for(i=len;i>=0;i--)
        {
            printf("%c",str[i]);
        }

        i=0;


    while (len >=0)
     {
        if (str[i++] != str[len--]) 
        {
            printf("%s is not a palindrome\n", str);
            return 0;
           
        }
    }
     printf("%s is a palindrome\n", str);
        }
