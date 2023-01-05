#include<stdio.h>
void main()
{
    int i,j,k, array_3d[2][2][3]={
                            {{1,2,3},{4,5,6}},
                            {{7,8,9},{10,11,12}}
                             };
/* here ifrst block  is of number of  2d arrays , sec block is of no. of rows in 
in both arrays and third is of column in both arrays*/
//i= 2d array,j=rows,k=column
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        for(k=0;k<3;k++)
        {
            printf("%d ",array_3d[i][j][k]);
        }
        printf("\n");
    }
printf("\n");
}
}