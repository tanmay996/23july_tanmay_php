#include<iostream>
using namespace std;
class cricketer                         //cricketer class -base class
{
    public:
    string bts;                         //only variable declared in 
    int truns[5],avgrun,i,total=0;
    
};

class batsman : public cricketer         //derived class
{   
    public:
    void data()                        //data function
    {
      
      cout<<"Enter Batsman name :";
      cin>>bts;
      for(i=0;i<5;i++)
      {
        cout<<"Enter Match "<<i+1 <<"Runs : ";
        cin>>truns[i];
        total+=truns[i];               //total runs using assignment operator
      }
      
      avgrun=total/5;                 //average runs
      
    }
    void showdata()
    {
        cout<<"Batsman name : "<<bts<<endl;
        cout<<"Total Run : "<<total<<endl;
        cout<<"Average Run : "<<avgrun<<endl;
    }

};
int main()
{
    batsman obj;
    obj.data();
    obj.showdata();
}