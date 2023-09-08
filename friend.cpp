#include<iostream>
using namespace std;
class abc;
class pqr{
    int data;
    public:
         pqr(){
            cout<<"enter a number :";
            cin>>data;

        }
        // pqr():data(3){ }
    friend int fun(abc,pqr);
};
class abc{
    private:
        int data;
    public:
        abc(){
            cout<<"enter a number :";
            cin>>data;
        }
        friend int fun(abc,pqr);
};
int fun(abc a,pqr p)
{
   if(a.data>p.data)
    return a.data;
   else 
    return p.data;
}
int main()
{
    abc a;
    pqr p;
    cout<<"greater number is :"<<fun(a,p);
}