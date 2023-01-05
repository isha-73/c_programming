// to fing gcd of two numbers
#include<stdio.h>
void main()
{
    int a,b,gcd;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    a=a>0?a:(-a);
    b=b>0?b:(-b);
    while(a!=b)
    //for(;a!=b;)
    {
       a=(a>b)?a-b:b-a;
        /*if (a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }*/
        
    }
    gcd=a;
    printf("gcd is %d",gcd);
}