#include<stdio.h>
void main () // to find the odd numbers between 1 to 100 using for loop and continue 
{
    int i,n=2;
    for (i=1;i<=100;i++)
    {
        /*if (i%2==0)
        {
            continue;
        }*/
        if (i==n)
        {
            n+=2;
            continue;
        }
        
        printf("%d",i);
    }
}

{

}