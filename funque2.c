#include <stdio.h>
/*void fun1(int a, int b)
{
    int c;
    c = a, a = b, b = c; //call by value dont change the values of actual values 
}
void fun2(int *a, int *b)
{
    int c;
    c=*a,*a=*b,*b=c; // call  by reference changes the actual value,hence this fun works here
}
int main()
{
    int a=4,b=5,c=6;
    fun1(a,b);
    fun2(&b,&c);
    printf("%d",c-a-b);
}*/
int fun()
{
 static int num =16;
 return num--;  // it means , it firdst retturn the value of num and then decreament the num.
}
void main()
{
    for(fun();fun();fun())
    printf("%d ",fun());
}