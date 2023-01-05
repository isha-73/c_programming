#include<stdio.h>
void main()
{
    int num1, num2,count=1,least,gcd,lcm;
    printf("Enter any two numbers: \n");
    scanf("%d%d",&num1,&num2);
    num1=(num1>0?num1:(-num1));
    num2=(num2>0?num2:(-num2));
    least = (num1>num2)?num2:num1;
    while(count<=least)
    {
        if(num1%count==0 && num2%count==0)
        {
            gcd=count;
        }
        count++;

    }
    printf("GCD is %d\n",gcd);
    
    lcm = (num1*num2)/gcd;
    printf("LCM is %d\n",lcm);


}