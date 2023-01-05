/* 1. to print 5X5 matrix and print the sum of  individual rows and columns*/
#include<stdio.h>
void main()
{
    int matrix[5][5]={{8,3,9,0,10},{3,5,17,1,1},{2,8,6,23,1},{15,7,3,2,9},{6,14,2,6,0}};
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d ",matrix[i][j]);
            };
        printf("\n");

    } int sum1=0, sum2=0;

    for(i=0;i<5;i++)
    {    
        for(j=0;j<5;j++)
        {
          sum1=sum1+matrix[i][j];
        }
        printf("The sum of row %d is %d\n",i+1,sum1);
        sum1=0;
    }
    for(j=0;j<5;j++)
    {
        for(i=0;i<5;i++)
        {
          sum2=sum2+matrix[i][j];
        }
        printf("The sum of column %d is %d\n",j+1,sum2);
        sum2=0;
    }

}