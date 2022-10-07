#include<stdio.h>
int a,b,i;
int menu()                                         //created menu function
    {
        printf("----------MENU----------\n");           
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Divion\n");
        printf("5. Exit\n");
    }

      int addition()
            {
                a+=b;                               //using assignment operator;
                printf("Addition is %d \n",a);
                return a;
            }

        int substraction()
            {
                a-=b;
                printf("Subtraction is %d \n",a);
                return a;
            }
        int multiplication()
            {
                a*=b;
                printf("Multiplication is %d \n",a);
                return a;
            }
        int division()
            {      
                a/=b;
                printf("Divion is %d \n",a);
                return a;
            }
    int data()
    {
        
        printf("Enter your choice :");
        scanf("%d",&i);
        printf("Enter first value :");
        scanf("%d",&a);
        printf("Enter second value :");
        scanf("%d",&b);        
        
        
        switch(i)
        {
            case 1:
            {
                addition();
                break;
            }
            case 2:
            {
                substraction();
                break;
            }
            case 3:
            {
                multiplication();
                break;
            }
            case 4:
            {
                division();
                break;
            }
            case 5:
            {
                return 0;
            }
            default:
            printf("Invalid choice :");
        }
    }

      

        int main()                                       //main function
            {
               
                
                    do{ 
                        menu();
                        data();
                        
                    }while(i !=5);
}