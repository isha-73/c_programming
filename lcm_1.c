#include<stdio.h>
void main()
{
    int num1,num2,max,lcm;
    printf("Enter any two numbers:\n");
    scanf("%d %d",&num1,&num2);
    max=(num1>num2)?num1:num2;
    while(1)
     {   if(max%num1==0 && max%num2==0) 
           { printf("THe lcm of %d and %d is %d",num1,num2,max);
            break;
           }
        ++max;
     }
}