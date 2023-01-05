#include<stdio.h>
void main()
{
    int inv, rem , a;
    inv = 0;
    printf( " enter a number : ");
    scanf("%d" , &a);
    while (a != 0)
    { 
        rem = a % 10 ;
        inv = inv * 10 + rem;
        a /= 10;

    }
    printf("%d", inv);
}
