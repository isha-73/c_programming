#include <stdio.h>
/*
int factorial(int a)
{
    if (a == 1 || a == 0)
        return 1;
    else
        return a * factorial(a - 1);           //example of recurssion
}
void main()
{
    int fact, num;
    printf("Enter the number of which you want a factorial: ");
    scanf("%d", &num);
    fact = factorial(num);
    printf("The factorial of %d is %d", num, fact);
}*/
int factorial(int n)   //example of itteration
{ 
    int temp=1;
    for(n;n>0;n--)
    {
        temp=temp*n;
  
    }
    return temp;
}
void main()
{
    int a;
    printf("Enter any number :\n");
    scanf("%d",&a);
    printf("%d",factorial(a));
}