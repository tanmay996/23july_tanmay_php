#include<stdio.h>
float a,b;
int i;                                              //declared global varible
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
                printf("Addition is %f \n",a);
                return a;
            }

        int substraction()
            {
                a-=b;
                printf("Subtraction is %f \n",a);
                return a;
            }
        int multiplication()
            {
                a*=b;
                printf("Multiplication is %f \n",a);
                return a;
            }
        int division()
            {      
                a/=b;
                printf("Divion is %f \n",a);
                return a;
            }
    int data()                          
    {  
        printf("Enter your choice :");
        scanf("%d",&i);       
        if(i==5)                                  //condition for  exit calculator
        return 0;
        else{   
        printf("Enter first value :");
        scanf("%f",&a);
        printf("Enter second value :");
        scanf("%f",&b); 
        
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
                break;
            }
            default:
            printf("Invalid choice :");
        }
        }
    }

      

        int main()                                       //main function
            {
               
                
                    do{ 
                        menu();
                        data();
                        
                    }while(i !=5);
}
