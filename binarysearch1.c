#include<stdio.h.>

int main()
{
    int size;
    printf("enter the size of the array :");
    scanf("%d",&size);
    int arr[size];

    printf("enter data :");
    for(int i =0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int s,found=0;
    printf("enter the element to search :");
    scanf("%d",&s);

    int mid,high=size-1,low=0;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]>s)
        {
            high=mid-1;
        }
        else if(arr[mid]<s)
        {
            low=mid-1;
        }
        else
        {
            printf("at %d position, %d found",mid,s);
            found=1;
            break;
        }
    }
    if(!found)
    {
        printf("not found");
    }
}