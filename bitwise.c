#include<stdio.h>
int fun(int num)
{
    int count=0;
    while(num)
    {count++;
    num>>=2;
    printf("%d",num);
    }
    
    return ( count);

}
void main()
{  
    printf("The return is %d",fun(2));
}