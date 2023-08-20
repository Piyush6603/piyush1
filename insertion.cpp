#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"enter the elements :";
     for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   
    for (i=1; i <n; i++)
    {
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
        /* code */
    }
    cout<<"the new array is :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}