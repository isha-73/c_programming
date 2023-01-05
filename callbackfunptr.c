// this is an eg of call back function pointer
#include <stdio.h>
int avg(int a , int b)
{
  return (a+b)/2;  
}
void goodmorning(int (*p)(int,int))
{
    int x=5,y=6;
    printf("the average is %d\n",p(x,y));
    }
int main()
{
   int (*p)(int,int);
   p = avg;
 printf("the average is %d\n ",p(5,6));
 goodmorning(p);
}