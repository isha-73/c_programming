/*given two numbers are a and b, add them, subtract them 
,and assign those values in a and b = example of call by reference and call by value*/ 
#include<stdio.h>
int operation(int*i , int*j) //call by ref
{
  int temp;
  temp = *i;
  *i = temp + *j;
  *j= *j - temp;
}
/*int operation(int x, int y) // call by val
{
    int temp;
  temp = x;
  x = temp + y;
  y= y - temp;
  int sum = x + y;
  return sum;

}


void main()
{
    int a, b;
    printf("enter num: ");
    scanf("%d %d",&a,&b);
    int add=operation(a,b);
    printf("%d and %d also %d",a,b,add);
}

