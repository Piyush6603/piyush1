#include <stdio.h>

char* odd_even(int i);

int main()
{
   int a;

   printf("Enter an integer : ");
   scanf("%d", &a);

   printf("Result : %s",odd_even(a));
   return 0;
}

char* odd_even(int a)
{
  if (a%2 == 0){
      return "YOUR NUMBER IS EVEN NUMBER";
   }else{
      return "YOUR NUMBER IS ODD NUMBER";
   }
}