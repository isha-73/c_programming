/* to check if no. is perfect or not.
a perfect number is the number whose perfect divisors
 except the number itself on summation gives the actual number.eg.6,28,496,8128*/
#include<stdio.h>
void main()
{
    int number,i,rem,sum=0;
    printf("Enter the number to check\n");
    scanf("%d",&number);
    printf("The divisors are: ");
    for(i=1;i<number;i++)
    {
        rem=number%i;
        if(rem==0)
        {
            printf("%d ",i);
            sum=sum+i;   
        }
    } printf("\n");
    if (sum==number)
    printf("The %d is a perfect number!yahoo!",sum);
    else
    printf("oops!The %d is not a perfect number , bye",number);
     
}