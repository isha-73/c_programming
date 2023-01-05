#include<stdio.h>
void swap(int *a,int *b)
{
    static int *temp;
    temp = a;        // here this swap function will not swap actually the value of a and b
                    // it will only swap the address of a and b ( call value type example )
    a = b;             
    b = temp;
}   
void printab()
{
    static int i, x=-3,y=-6;   // static integer means , it will retain the values of a and b , even after the function call
    i=0;                       // on calling this function again , tyhe values of  & b of previous one will only be retained , it will not be what assigned to a and b
    while(i<=4)
    {
        if((i++)%2==1) continue;
        x=x+i;
        y=y+i;
    }
    swap(&x,&y);
    printf("x=%d,y=%d\n",x,y);
}
void main()
{
    printab();
    printab();
}