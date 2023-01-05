#include<stdio.h>
//call by reference 
/*int fun( int *ptr1,int *ptr2)
{ 
 *ptr1=30;
 *ptr2=5;
}
int main()
{
    int a=5 , b =30;
    fun(&a,&b);
    printf("%d,%d",a,b);
}*/
//call by value
int fun( int i,int j)
{ 
 i=30;
 j=5;
}
int main()
{
    int a=5 , b =30;
    fun(a,b);
    printf("%d,%d",a,b);
}
