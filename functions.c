#include<stdio.h>
int sum1();
int main ()
{
    int i,j;
    int add, prod ;
    printf("Enter the two values : ");
    scanf("%d %d", &i, &j);
    add = sum1( i,j);
  printf("%d",add);


    }
int sum1( int a, int b)
{
    int sum;
    sum = a+b;
    return sum; 
}
