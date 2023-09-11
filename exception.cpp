#include<iostream>
using namespace std;
int main()
{
//     try
//     {
//         int  a,b;
//         cout<<"enter no. :";
//         cin>>a>>b;
//         if(b==0)
//             throw 0;
//         cout<<"division :"<<a/b;
//         cout<<"donot";
//     }
//     catch(int x)
//     {
//         cout<<"error \n";
//     }
//     cout<<"thank you";

    try
    {
        cout<<"welcome ";
        try
        {
            cout<<"to inner try block\n";
            throw 2;
            cout<<"bye";
        }
        catch(int x)
        {
            cout<<"throw working\n";
            throw x;
        }
    }
    catch(int y)
    {
        cout<<"outer try block\n";
    }    
}