//Calci using Multilevel inheritance
#include<iostream>
using namespace std;
class calci                                                         //created base class of calci
{
    public:
    float a,b;
    char x;
    int menu()                                                     //member function of menu
        {
            cout<<"Enter '+' for Addition"<<endl;
            cout<<"Enter '-' for Substraction"<<endl;
            cout<<"Enter '*' for Multiplication"<<endl;
            cout<<"Enter '/' for Division"<<endl;
            
            return 0;
        }
    
    int getdata()                                                 //member function of get choice of users
        {   
         
            cout<<"Enter your choice"<<endl;
            cin>>x;
            if(x == '+' || x == '-' || x == '*' || x == '/')  //conditional statement for valid choice
                {
                   cout<<"Enter first value"<<endl;
                   cin>>a;
                   cout<<"Enter second value"<<endl;
                   cin>>b;
                   
                }
            else
            {
                cout<<"Invalid choice"<<endl;
                cout<<"Re-Enter choice"<<endl;
                return getdata();                             //using recursiom               
            }
            return 0;
        };
    
};
class caldata : public calci                                   //derived class(caldata) inherite from calci
{
    public:
    float total;
    int calculate()
    {
    switch(x)
        {
            case '+':
            {
               total = a + b;
                break;
            }
            case '-':
            {
                total = a - b;
                break;
            }
            case '*':
            {
                total = a * b;
                break;
            }
            case '/':
            {
                total = a / b;
                break;
            }
            
            default :
            cout<<"Invalid input";

        }
         
        return 0;
    }
        
        
};
class c : public caldata
{
    public:
    int y,nval;
    int nmenu()                                                   //created new menu member function
    {
        cout<<"Enter 1 for total"<<endl;
        cout<<"Enter 2 for calculate another value"<<endl;
        cout<<"Enter 0 for exit"<<endl;
        cin>>y;
    
    switch (y)
    {
        case 1:
        {
            cout<<"Total is :"<<total<<endl;
            break;
        }
       case 2:
       {
            menu();                                         
            another();
            break;
        }
        case 0:
        {
            break ;
        }
        default:
        cout<<"Invalid option";
    }    
        return 0;
    }

    int another()                                           //another() for get New value from user and calculate total value 
    {
        
        cin>>x;
        if(x == '+' || x == '-' || x == '*' || x == '/')
        {
         switch(x)
         {
            case '+':
            {
                cout<<"Enter value"<<endl;
                cin>>nval;
                total += nval;
                break;
            }
            case '-':
            {
                cout<<"Enter value"<<endl;
                cin>>nval;
                total -= nval;                            //using assignment operator
                break;
            }
            case '*':
            {
                cout<<"Enter value"<<endl;
                cin>>nval;
                total *= nval;
                break;
            }
            case '/':
            {
                cout<<"Enter value"<<endl;
                cin>>nval;
                total /= nval;
                break;
            }
            default:
                cout<<"Invalid option"<<endl;
         }  
        
        }
         else
         {
            cout<<"Invalid choice"<<endl;
            cout<<"Re-Enter choice"<<endl;
            return another();                           //using recursiom
         }
        return 0;
    }
     
};


int main()                                             //main function of file
{
    cout<<"*-----Calculator-----*"<<endl;
    c obj;                                            //object created of derived class                                        
    obj.menu();
    obj.getdata();
    obj.calculate();
   
    do{
        obj.nmenu();

      }while(obj.y != 0);
       
    return 0;
}