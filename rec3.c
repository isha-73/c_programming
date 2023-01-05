#include<stdio.h>
int fun(int n)
{
    if (n==0)
    return 0;
    else
     fun(n/2);
    printf("%d ",n/2);
}
void main()
{
    int a=3;
    printf("%d",fun(3));
    fun(a);
}