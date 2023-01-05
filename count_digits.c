#include<stdio.h>
void main()
{
    long long int num, count;
    count=0;
    printf("ENter the number :\n");
    scanf("%lld",&num);  //%lld is used to take long long int
    long long int temp=num;
    if (num>0)
    {do
     { num =num/10;
     count++;
    } while (num!=0);
    printf("There are %lld digits in %lld",count,temp);
    }
    else if(num=0)
    printf(" The number have only one digit");
}