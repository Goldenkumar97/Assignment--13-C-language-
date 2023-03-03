//Write a program in c to count the digits of a given number using recursion
#include"stdio.h"
int Count(int);
int main()
{
    int n;
    printf("enter a number = ");
    scanf("%d", &n);
    printf("Total Digits in This Given Number is = %d", Count(n));
}int x = 0;
int Count(int a)
{
    if (a == 0)
        return 0;
    x++ + Count(a / 10);
    return x;
}