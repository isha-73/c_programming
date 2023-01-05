#include<stdio.h>
int get(int n)
{
    if (n<1) return;
    get(n-1);
    get(n-3);
    printf("%d",n);
}
void main()
{
    get(6);
}