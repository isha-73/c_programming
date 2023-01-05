/*
#include <stdio.h>
void main()

{
    float num, i = 0;                    
    printf("  Enter a number : ");
    scanf("%f", &num);
    do
    {
        printf("%f\n",i );
        i=i+0.0001;

    } while (i<num);
    
} 
{
   unsigned i = 1;
   int j= -4;
   printf("%d",i+j);
}*/
#include<stdio.h>
/*#define ADD(x,y) x+y
#define Pi 3.14
int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("Sum of %d and %d is %d\n",a,b,ADD(a,b));
    printf("Value of Pi is %.2f\n",Pi);
    return 0;
}
#define greater(x,y) if(x>y) \
    printf("%d is greater than %d\n",x,y); \
    else \
    printf("%d is less than %d\n",x,y);
int main()
{
    int x,y;
    printf("Enter two numbers : ");
    scanf("%d%d",&x,&y);
    greater(x,y);
    return 0;
}*/
#include<stdio.h>
/*int main()
{
    printf("Today's date is %s\n",__DATE__);
    printf("Time is %s\n",__TIME__);
    return 0;
}
int main ()
{
    int a= 034;
    printf("%o",a);
} //octal*/

#define STRING "%s"
#define WORLD "World me aye ho mje kroo"
int main()
{
    printf(STRING,WORLD);
    return 0;
}