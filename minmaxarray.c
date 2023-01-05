#include<stdio.h>
/*void main() //  without using pointer 
{
    int min, max,array[]= {12,25,45,62,36,122,87,54,65,32,74},i,len;
    
    min=max=array[0];
    len=sizeof (array)/ sizeof (array[0]);
    printf("Length of array is  %d\n",len);
    for(i=1;i<len;i++)
    {
        if ( max<array[i] )
        max= array[i];
        if( min>array[i] )
        min= array[i];
    }
    printf("less and max nums are %d and %d",min,max);
}*/


//using pointer variables( call by reference in functions)
void minmax(int*min,int*max,int ar[],int len)
{
    int i;
    *min=*max=ar[0];


    for(i=1;i<len;i++)
{       if(ar[i] > *max)
        *max= ar[i];
        if(ar[i] < *min)
        *min= ar[i];
}
   printf("Minimum and maximum numbers are %d and %d",*min,*max);
}
void main()
{
    int array[]= {12,25,45,62,36,522,87,54,65,32,74};
    int minimum , maximum;
    int len=sizeof(array)/sizeof(array[0]);
    minmax(&minimum,&maximum,array,len);
    //printf("Minimum and maximum numbers are %d and %d",minimum,maximum);

}