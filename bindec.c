//conversion of binary numbers into decimal no.
#include<stdio.h>
void main()
{
    int binary,decimal,rem,base;
    printf("Enter any binary number:\n");
    scanf("%d",&binary);
    printf("The decimal conversion of binary %d is ",binary);
    decimal=0;
    base=1;
    while(binary!=0)
    {
        rem=binary%10;
        decimal=decimal+rem*base;
        binary/=10;
        base*=2;
    }
    printf("%d",decimal);
}