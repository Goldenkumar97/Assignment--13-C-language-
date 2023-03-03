#include "stdio.h"
int SumofDigits(int a)
{
    if (a == 0)
        return 0;
    return a % 10 + SumofDigits(a / 10);
}
int main()
{
    int n;
    printf("enter a number = ");
    scanf("%d", &n);
    printf("Sum of All Digits is = %d", SumofDigits(n));
    return 0;
}