#include<iostream>
using namespace std;
int fun(int);
int a=2;
int main()
{
    int a=10;
    cout<<a<<endl;
    fun(a);
    cout<<a<<endl;
}
int fun(int a){
    cout<<a<<endl;
}