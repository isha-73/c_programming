#include<stdio.h> // to find mid term of array by using pointer
int *middle(int arr[]);
void main()
{
    int arr[]={12,45,85,45,78,96,8};
   
    int *mid;
    mid= middle(arr);
    printf(" mid term of this array is %d",*mid);
}
int *middle(int arr[])
{   int len;
 len = sizeof(arr)/sizeof(arr[0]);
    return (&arr[len/2]);
} 