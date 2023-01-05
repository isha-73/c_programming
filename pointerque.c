#include<stdio.h>
/*void fun(const int *p)
{
    *p = 0;
} 
// here we cant change the value in a as it is constant through out the program
int main()
{
   const int a = 10;
    fun(&a);
    //printf("%d",a);
    return 0;
}*/
// address of  a number
/*
int main()
{
    float a = 100;
    float *p = &a;
    printf("address of number %f is %p\n",*p,p);
    printf("using aliases of a = %f",*&a);
    return 0;
}*/

// arithmetic operations using pointers
/*void main()
{
    int a[] = {10,20,30,40,50};
    int *ptr = &a[1];
    int *ptr1 = &a[2];
   // ptr = ptr + 2;
    //printf("%d %p\n",*ptr,ptr);
    //ptr1 = ptr1 - 2;
  //  printf("%d %p\n",*ptr1,ptr1);
    printf("%d\n",ptr1-ptr);
    printf("%d",a[ptr1-ptr]);
   
} 
void main()
{
    int a[] = {10,20,30,40,50};
    int *ptr = &a[0];
    printf("%d\n",*ptr);
    printf("%d\n",*ptr++);
    printf("%d",*ptr);
   
   
}*/
/*void fun(int *p ,int *q)
{
    p=q;
   *p=2;
}
void main()
{
    int a = 10;
    int b = 20;
    fun(&a,&b);
    printf("%d,%d",a,b);
}*/
int f(int x, int *py, int **pz)
{   int y, z;
    **pz += 1;
    z = **pz;
    *py += 2;
    y = *py;
    x+=3;
    return x+y+z; 
}
void main()
{
    int c=4,*b,**a;
    b=&c;
    a=&b;
    printf("%d",f(c,b,a));
    
    
}