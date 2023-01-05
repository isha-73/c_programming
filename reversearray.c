#include<stdio.h>
void main()
/*
{
    int array[9]={34,56,54,60,87,65,23,12,20};
    
    int i;
   printf("The array is: ");
    for(i=0;i<9;i++)
    {
        printf("%d ",array[i]);
    } printf("\n");
 printf("The reversed array is: ");
 for(i=8;i>=0;i--)
 {
     printf("%d ",array[i]);
 } printf("\n");
 int size = sizeof(array)/sizeof(array[0]);
 printf("The size  0f array is:%d",size);
}*/
// by using pointers
#define N 6
{
    int array[N];
    int *p;
   printf("The array is: ");
    for(p=array;p<=array+N-1;p++)
    {
        scanf("%d",p);
    } printf("\n");
 printf("The reversed array is: ");
 for(p=array+N-1;p>=array;p--)
 {
     printf("%d ",*p);
 } printf("\n");
 int size = sizeof(array)/sizeof(array[0]);
 printf("The size  0f array is:%d",size);
}

    