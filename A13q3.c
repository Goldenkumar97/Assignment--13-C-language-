//(3) Write a recursive function to calculate sum of first N odd natural numbers.
#include"stdio.h"
int firstodd(int n);
int main()
{
    int x;
    printf("Enter a number ");
    scanf("%d",&x);
    printf("%d is first odd sum number of %d",firstodd(2*x-1),x);
    return 0;
}
int firstodd(int n)
{
    if(n==1)
    return 1;
    return n + firstodd(n-2);
}