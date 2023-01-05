#include<stdio.h>
void main()
{
    // to find lcm of two numbers
    int a,b,lcm,product,gcd;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    product=a*b;
    //while(a!=b)
    for(;a!=b;)
    {
        a=(a>b)?a-b:b-a;
    }
    gcd=a;
    lcm=product/gcd;
    printf("%d",lcm);
}


/*#include<stdio.h>
void main()
{
    int i,t,lcm;
    printf("Enter the numbers : \n"); 
    scanf("%d %d",&t,&i);
    lcm=(i>t)?i:t;
    while(1)
    {
        if(lcm%i==0 && lcm%t==0)
        {
            break;
        }
        lcm++;
    } 
    printf("%d",lcm);

}*/