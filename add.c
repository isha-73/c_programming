#include<stdio.h> // adding two numbers without using Addition ope. 
void main()       
{
    int a,b,sum=0,i;
    printf("ENter two numbers to add:\n");
    scanf("%d %d",&a,&b);
 if (b>0)
 {
     for(;b!=0;b--)
     a++;
     printf("Sum is %d",a);
 }
 if (b<0)
 {
     for(;b!=0;b++)
     a--;
     printf("Sum is %d",a);
 }

  

}