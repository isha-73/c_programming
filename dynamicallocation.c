// use of malloc ,calloc ,realloc ,free
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *ptr;
    printf("enter the size of array :");
    int size;
    scanf("%d",&size);
    //ptr = (int *)malloc(size*sizeof(int)); // initializes the  array with garbage values
    ptr = (int *)calloc(size,sizeof(int)); // calloc works same as malloc but it initializes the array with 0
    printf("enter the elements of array :"); 
    int i;
    for(i=0;i<size;i++)
    {
        //scanf("%d",&ptr[i]);
        scanf("%d",&*(ptr+i));
    } printf ("\n");
    printf("the array is :");
    for(i=0;i<size;i++)
    {
        printf("%d ",*(ptr+i));
    } printf("\n");
    
   // use of realloc 
   printf("Enter the new size of array :");
    scanf("%d",&size);
    ptr = (int *)realloc(ptr,size*sizeof(int)); //realloc is used to change the size of array
    printf("enter the elements of array :");
    for(i=0;i<size;i++)
    {
        scanf("%d",&*(ptr+i));
    } printf ("\n");
    printf("the new array is :");
    for(i=0;i<size;i++)
    {
        printf("%d ",*(ptr+i));
    } printf("\n");
    // use of free
    free(ptr); // to free the memory allocated

}