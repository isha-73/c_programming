/* function pointers points to the code and not the data 
we can not do allocation/deallo using fun ptrs like normal ptrs */
/*#include<stdio.h> // to use function pointers
int add (int a, int b)
{
    return a+b;
}
int main ()
{
    int x=5,y=6;
    int (*p)(int ,int);
    p=add;
    printf("addition of two numbers is %d",p(x,y));
}*/
//application of function pointers : to build a calculator
#include<stdio.h>
float sum ( float a, float b) { return a+b;}
float sub ( float a, float b) { return a-b;}
float mul ( float a, float b) { return a*b;}    
float div ( float a, float b) { return a/b;}
int main ()
{
    /*float (*p)(float,float);
    float a,b;
    int ch;
    printf("enter the two numbers\n");
    scanf("%f%f",&a,&b);
    printf("enter the choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: p=sum;
                break;
        case 2: p=sub;
                break;
        case 3: p=mul;
                break;
        case 4: p=div;
                break;
        default: printf("invalid choice");
    }
    printf("the result is %f",p(a,b));*/
    float *pfun[]={sum,sub,mul,div};
}


