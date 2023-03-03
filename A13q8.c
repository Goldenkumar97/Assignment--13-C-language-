//Write a recursive function to print first n terms of fibbonacci series.
#include "stdio.h"
int Fibo(int);
int main()
{
    int n, i;
    printf("Enter a number ");
    scanf("%d", &n);
    printf("First %d terms of Fibonnaci series are = ", n);
    for (i = 1; i <= n; i++)
        printf("%d ", Fibo(i));
    return 0;
}
int Fibo(int x)
{
    if (x == 0 || x == 1)
        return x;
    return Fibo(x - 1) + Fibo(x - 2);
}