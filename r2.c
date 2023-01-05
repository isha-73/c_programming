#include<stdio.h> //example of tail reccurssion.
int fun(int a)
{ 
    if ( a>100)
    return;
    else
    printf("%d\n",a);
    return fun(a+1);
}
int main()
{
    fun(3);
    return 0;
}