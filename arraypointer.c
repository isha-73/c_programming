#include<stdio.h>// eg. of poiunter pointing to an entire 1d array
void main()
{
    int a[][3]={{1,2,3},{4,5,6}};
    int (*p)[3]= a;
    printf("%d %d %d\n",(*p)[0],(*p)[1],(*p)[2]);
    printf("%d %d %d\n",(*(p+1))[0],(*(p+1))[1],(*(p+1))[2]);


}