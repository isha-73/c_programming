#include<stdio.h>
// reverse an array ...
void reverse(int array[],int len)
{
    int i;
    //int len = sizeof(array)/sizeof(array[0]);
    for(i=len-1;i>=0;i--) // why on finding len here pgm doesnt work good 
    {
       printf("%d ",array[i]);
    }
}
void main()

{
    int  array[]={54,6,20,12,3,47,62};
int len = sizeof(array)/sizeof(array[0]);
     printf("the reverse aray is :");
     reverse(array,len);


}