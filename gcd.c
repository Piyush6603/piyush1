#include <stdio.h>

int gcd(int, int);

int main()
{
    int a,b;

    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);

    printf("The greatest common divisor of %d and %d is %d", a,b, gcd(a,b));
    return 0;
}

int gcd(int x, int y)
{
    if (x % y == 0)
        return y;
    else
        return gcd(y, x % y);
}