//Write a recursive function to calculate factorial of a given number.
#include"stdio.h"
int facto(int x);
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("%d is the factorial of %d ",facto(n),n);
    return 0;
}
int facto(int x)
{
    if(x==1)
    return 1;
    return x * facto(x-1);
}