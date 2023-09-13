#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"enter the elements :";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int counter=1;
    while(counter<n)
    {
    for(i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            int temp; 
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    counter++;
    }
    cout<<"the sorted array is :";
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
}