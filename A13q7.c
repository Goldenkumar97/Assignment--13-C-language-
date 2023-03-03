//Write a recursive function to calculate hcf of two number.
#include"stdio.h"
int hcf(int n, int m);
int main()
{
    int  a,b;
    printf("Enter two number ");
    scanf("%d%d",&a,&b);
    printf("%d is the hcf of %d",hcf(a,b),a,b);
    return 0;
}
int hcf(int n ,int m)
{
    if(m==0)
    return n;
    return hcf(m,n%m);
}
    
