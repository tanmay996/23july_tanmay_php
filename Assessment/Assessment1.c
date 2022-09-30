#include<stdio.h>

int data()
{
    int a,b,result;
    int i=1;
   do{
    printf("Enter your choice : \n");
    scanf("%d",&i);
 if(i==5)
    {
        return 0;
    }
    printf("Enter first number");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);
   
   
     switch(i)
     {
        case 1:
        result=a+b;
        printf("Addition is %d \n",result);
        break;
        case 2:
        result=a-b;
        printf("Subtraction is %d \n",result);
        break;
        case 3:
        result=a*b;
        printf("Multiplication is %d \n",result);
        break;
        case 4:
        result=a/b;
        printf("Divion is %d \n",result);
        break;
        // case 5:
        // return 0;
        // break;
        default:  
        printf("Invalid option \n");
        break;
        }
   
    }while(i !=5);
}
int main()
{
    printf("----------MENU----------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Divion\n");
    printf("5. Exit\n");
    data(); 
}