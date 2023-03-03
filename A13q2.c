//(2) Write a recursive function to calculate sum of first N odd natural numbers
#include"stdio.h"
int odd(int n );
int main()
{
    int y;
    printf("Enter a number ");
    scanf("%d",&y);
    printf("%d of sum of nth odd number ",odd(2*y-1));
    return 0;
} 
int odd(int n)
{
    if(n==1)
    return 1;
    return n + odd (n-2);
}