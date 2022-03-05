#include<stdio.h> 
 
int main(){ 
    int n,a,s=0; 
    printf("Enter a number: "); 
    scanf("%d",&n); 
     
    while(n>0)
    { 
        a=n%10; 
        s+=a; 
        n=n/10; 
    } 
     
    printf("\nSum is: %d", s); 
     return 0; 
} 