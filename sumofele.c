// sum of elements of an array by using pointers
#include<stdio.h>

/*void main()
{
    int array[]= {1,2,3,4,5,6,7,8,9,10},sum=0;
    int *p = &array[0];
    for (p;p<=&array[9];p++)
    {
        sum=sum+ *p ;
    }
    printf("The sum of elements of an array iis  %d",sum);
}*/
// alternative way to do it
/* here we can use name of an array 
as the pointer of first element of an array... here p= &array[0]is similar to p=array;
but we can not assign the new address to this type of pointer  as it is defined for
only first eent  of an array. so here incre/decrement is not possible.like p++

{
    int a[]= {1,2,3,4,5,6,7,8,9,10},sum=0;
    int *p ;
    for (p=a;p<=a+9;p++)
    {
        sum=sum+ *p ;
    }
    printf("The sum of elements of an array iis  %d",sum);
}
*/
// again using function 

    int add(int ar[],int n)
    {      /* here *b is the pointer of first element of an array and 
    we can write it as int b[] which means the same , actually the whole array is not 
     taken in the argument of function but only the first element of an array is taken as a  pointer.
        */
        int i,sum=0;
        for(i=0;i<n;i++)
        {
            sum=sum+ar[i];
        }
        return sum;
    }
      int main()
    {
        int n, sum,i;
        
        printf("Enter the number of elements in an array\n");
        scanf("%d",&n);
        if (n<=0)
        {
            printf("Invalid number of elements\n");
            return 0;   
        }
     int ar[n];
        printf("Enter the elements of an array\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&ar[i]);
        }
        for (i=0;i<n;i++)
        {
            printf("%d\n",ar[i]);
            if (ar[i]>1000)
            {   printf("Invalid input\n");
                return 0;
            
            }
        }
       sum =add(ar,n);   // here a  is not whole array but only first element of an array , its used as a pointer
        printf("The sum of elements of an array is  %d",sum);
    }
