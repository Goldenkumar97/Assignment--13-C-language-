//Write a recursive funtion to calculate sum of first n natural number.
#include"stdio.h"
int sum(int n);
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("%d is a sum of %d natural number ",sum(n),n);
    return 0;

}
int sum(int y)
{
    if(y>=1)
    {
        return y + sum(y-1);
    }

}