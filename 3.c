#include<stdio.h> // to print the addresses of ecah elemeents of 3d array
void main()
{
 int array3d[3][3][3]={
    {{1,2,3},{4,5,6},{7,8,9}},
    {{10,11,12},{13,14,15},{16,17,18}},
    {{19,20,21},{22,23,24},{25,26,27}}};
 int *ptr = array3d;
    int i,j,k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("%d ",ptr);
                ptr++;
            }
            printf("\n");
        }
        printf("\n");
    }
}