/*#include<stdio.h>// to print rows matrix
void main()
{ 
    int i,j,rows,cols;
    printf("Enter the number of rows and columns\n");
    scanf("%d%d",&rows,&cols); //for square matrix rows = cols
    printf("The rows are %d and columns are %d\n",rows,cols);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=cols;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

}*/
#include <stdio.h> // to print a  pattern
void main()
{
    int i ,j ,n;
    printf("Enter the number of rows \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n-(i-1)&&j<=n+(i-1))
            {
                printf("*");               
            }
            else 
            printf(" ");
        }
        printf("\n");
    }
}
