#include<stdio.h>
int fun(int n)
{
    if (n==1)
    return 1;
    else 
    return 1 + fun(n-1);
    
}
void main()
{
    int a;
    scanf("%d",&a);
    printf("%d",fun(a));
}