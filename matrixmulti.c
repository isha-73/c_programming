#include<stdio.h>
// the pgm to multiply two matrices
void main()
{
    int m1[3][3] ,m2[3][4],i,j,k,sum=0;
    int result[3][4];
    printf("Enter the first matrix : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&m1[i][j]);

        }
    }
      printf("Enter the sec matrix : \n");
       for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&m2[i][j]);

        }
    }
    printf("1 : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",m1[i][j]);

        }printf("\n");
    }
    printf("2 : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",m2[i][j]);

        }printf("\n");
    } 
    printf("transpose of ut is:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",m2[j][i]);

        }printf("\n");
    } 
    for (i=0;i<3;i++)
    {
        for (j=0;j<4;j++)
        {
            for(k=0;k<3;k++)
            {
                sum+=m1[i][k]*m2[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }
    printf("The result of matrix multi is:\n");
 for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",result[i][j]);

        }printf("\n");
}
}