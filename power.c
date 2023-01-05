// to find the power of an integer.
#include<stdio.h>
void main()
{
    int base,exponent,expo,power1=1;
    double power2= 1.0;
    printf("Enter base and exponent please: \n");
    scanf("%d %d",&base,&exponent);
    expo=exponent;
    if(exponent>0)
    {
        while(expo!=0)
        {
            power1=power1*base;
            expo--;
        }
        printf("The %d to the power of %d is %d",base,exponent,power1);
    }
    else 
    { while(expo!=0)
        {
            power2=power2*(1.0/base);
            expo++;
        }
        printf("The %d to the power of %d is %.8f",base,exponent,power2);
    }
}