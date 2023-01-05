#include<stdio.h>
/*void main()  // to print array using pointer arithmetic
{
    char array[10];
    int i;
    printf("enter the string :");
    for(i=0;i<10;i++)
    {scanf("%c",&array[i]);}   
char *ptr = array;
 printf("the array is :");
 printf("%c,%c,%c,%c,%c,%c,%c,%c\n",*(ptr),*(ptr+1),*(ptr+2),*(ptr+3),*(ptr+4),*(ptr+5),*(ptr+6),*(ptr+7));
}*/
int a=343;
int fun()
{
   extern int a; // to access the global variable
    return a;
}
void main()
{
    int a;
    printf("%d\n",a);
    printf("%d",fun());
}
 