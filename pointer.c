#include<stdio.h>
void main()
{
    int i=1,j=2;;
    int *p = &i,*q=&j;
     /*q=p;
    *q = 5;*/
    printf("%d %d",*p,*q);
}