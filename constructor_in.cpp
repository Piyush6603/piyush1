// defult constructor in inheritance 

#include<iostream>
using namespace std;

class base
{
    public:
    base()
    {
        cout<<"base constructor is called"<<endl;
    }
};

class derive:public base
{
    public:
    derive()
    {
        cout<<"derive constructor is called";//here base constructor is automatically called
    }
};

int main()
{
    derive d;
    
}