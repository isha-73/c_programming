/*#include<stdio.h>
void main() // to print a fibonacci series from two given numbers:
{
    int num1,num2,num3,i,n;
    num1=0,num2=1;
    n=20;
    printf("The fibonacci series is: ");
    for(i=1;i<=n;++i)
    {
        printf("%d ",num1);
        num3= num1 + num2;
        num1=num2;
        num2=num3;

    }

}*/


#include<stdio.h>
int fibonacci(int i)
{
    if (i==0 || i==1)
    return i;
    else 
    return ( fibonacci(i-1)+fibonacci(i-2));
}
void main()
{ 
    int i,limit;
    printf("Enter the elements u want in the series\n");
    scanf("%d",&limit);
    printf("The fibonacci series: ");
    i=0;

    while(i<=limit)
    {
        printf("%d ",fibonacci(i));
        i++;
    }
}
    
     


