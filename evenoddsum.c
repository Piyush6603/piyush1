#include<stdio.h>
int main()
{
    int n,sume=0,sumo=0;
    int a[10];
    printf("enter 10 numbers : ");
    
    for(n=0;n<10;n++)
    {
        scanf("%d",&a[n]);
        if(a[n]%2==0)
        sume=sume+a[n];
        else
        sumo=sumo+a[n];
   }
   printf("\nsum of even numbers : %d",sume);
   printf("\nsum of odd number : %d",sumo);
}