//Write a recursive function to calculate sum of squares of first n natural numbers.
#include"stdio.h"
int square (int n)
{
    if(n>=1)
    return n*n + square(n-1);
}
int main()
{
    int x;
    printf("Enter  a number ");
    scanf("%d",&x);
    printf("%d is sum of squares of first n natural numbers",square(x));
}