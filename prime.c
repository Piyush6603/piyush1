#include <stdio.h>

int main() {

  int n, i, a=0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

 
  if (n == 0 || n == 1)
    a = 1;

  for (i = 2; i <= n / 2; ++i) {

    if (n % i == 0) {
      a= 1;
      break;
    }
  }

  if (a == 0)
    printf("%d is a prime number.", n);
  else
    printf("%d is not a prime number.", n);

  return 0;
}