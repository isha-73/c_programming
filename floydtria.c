// FLoyde's Triangle is a right angled triangular array of natural numbers
// It is filled by the natural numbers starting with 1 fiille at the top;
#include<stdio.h>
void main()
{
    int n,row,ele,i,a;
    printf("Enter the number at the top of triangle and total rows:\n");
    scanf("%d %d",&n,&row);
    printf("This the Floyd's Triangle!\n");
    
    for(i=1;i<=row;i++)
    {
        
        for(ele=1;ele<=i;ele++)
        {
            
            printf("%d ",n);
           n++;
        }
        printf("\n");

    }
}