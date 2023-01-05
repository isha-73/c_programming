//call by reference example: to swap the two numbers 

#include<stdio.h>
void swap(int *i, int *t)
{
    int temp;
    temp= *i;
    *i=*t;
    *t=temp;
}
void main()
{
    int a,b;
   printf("Enter the numbers :\n");
   scanf("%d%d",&a,&b);
   printf("%d and %d\n",a,b);
    swap(&a,&b);
    printf("%d and %d",a,b);

}

/*
#include<stdio.h>
void main()
{
    int num1,num2,num3,temp;
    printf("Enter any three numbers: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    printf("The three digit number is : %d%d%d\n",num1,num2,num3);
 temp = num1;
 num1=num3;
 num3=temp;
 printf("The swapped three digit number is %d%d%d",num1,num2,num3);
}
{ 
    int a,b;
    printf("Enter the numbers :\n");
    scanf("%d %d",&a,&b);
    a= a^b;
    b= a^b;
    a= a^b;
    printf("%d and %d",a,b);
}*/