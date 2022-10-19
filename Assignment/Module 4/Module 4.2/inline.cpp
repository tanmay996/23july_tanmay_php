#include<iostream>
int no;
using namespace std;
inline int getvalue()
{
    
    cout<<"Enter no.";
    cin>>no;
    return no;
}
int main()
{
    getvalue();
    cout<<"Square is "<<no*no<<endl;
    cout<<"Cubic is "<<no*no*no;
}