#include<stdio.h>
void fun()
{    static int i;
    printf("%d\n",i);
    i++;
   // printf("%d\n",i);
}
void main()
{   fun();
    fun();
    fun();
    fun();
}