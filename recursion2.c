//example of indirect recurssion= to print the numbers from 1-10 in such a way that ,if num is odd  add 1 to it, if num is even subtract 1 from it
#include<stdio.h>
int n=1;
int odd()
{
   if(n<= 100) 
   {printf("%d\n",n+1);
    n++;}
    return even();
    

}
int even()
{
    if (n<=100)
{ printf("%d\n",n-1);
 n++;}
 return odd();
 }
void main()
{ 
     odd();
}