#include<iostream>
using namespace std;
int n;
int main()
{
    int i;
    int a;
    cout<<"enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"enter the elements :";
     for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter your choice :";
    cout<<"\n 1.insert elements \n2.delete element \n 3.search element :";cin>>a;
    switch(a)
    {
        case 1 :
         cout<<insert(arr,n);
         break;
        case 2:{
         cout<<delete(arr,n);
         break;}
        case 3 :
         cout<<search(arr,n);break;
        default :
         cout<<"enter a valid number";
         break;
    }
}
int insert(int arr[],int n)
{
    int pos,num,i;
    cout<<"enter the position to be inserted";
    cin>>pos;
    cout<<"enter the number to be inserted :";
    cin>>num;
    for(i=n;i>=pos;i--)
    {
        arr[i+1]=arr[i];

    }
    arr[pos]=num;
    cout<<"new array :";
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
int delete(int arr[],int n)
{
    int pos,i;
    for(i=pos;i<n;i++)
    {
        arr[i]=arr[i+1];

    }
    for(i=0;i<n-1;i++)
    {
        cout<<arr[i];
    }

}