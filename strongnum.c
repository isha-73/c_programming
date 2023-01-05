#include<stdio.h>
void main()   /* to check whether the num is strong num or not
strong num is the num which is sum of the factorial of its each digit */
{
    int num, fact=1,sum=0,q,i,rem;
    printf("Enter any number:\n");
    scanf("%d",&num);
    q=num;
    while(q!=0)
    {    //rem = q%10;
        for(i=1;i<=rem;i++)
        {
           rem=q%10;
            fact= fact * i;
        }
        sum = sum + fact ;
        fact=1;
        q/=10;
    }
    printf("The sum of factorial oof each digit is %d\n",sum);
    if(sum==num)
    printf("%d is a strong number!!!",num);
    else printf("%d is not a strong number.",num);

}