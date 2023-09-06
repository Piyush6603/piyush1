#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the size of array :";
    cin>>n;
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        cout<<"enter the elements :";
        cin>>arr[i];

    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
             {
                 int rev;
                 rev=arr[j];
                 arr[j]=arr[i];
                 arr[i]=rev;

                  
             }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}