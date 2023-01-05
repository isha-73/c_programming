#include <stdio.h>
void main()
/*{
 int two_darray[2][3];
 int i,j;
//2 rows & 3 columns;
printf("Enter the ellements of an array\n");
 for (i=0;i<2;i++)
 {
     for(j=0;j<3;j++)
     {
         scanf("%d",&two_darray[i][j]);
     }

 }

 printf("The 2d array is as follows:\n");
 for (i=0;i<2;i++)
 {
     for(j=0;j<3;j++)
     {
         printf("%d ",two_darray[i][j]);
     }
     printf("\n");
 }
}*/
// by using pointers
#define rows 4
#define column 4
{
    int a[rows][column];
    int *ptr;
    printf("Enter the elements of an array\n");
    for (ptr = &a[0][0]; ptr <= &a[rows - 1][column - 1]; ptr++)
    {
        scanf("%d", ptr);
    }
    printf("The 2d array is as follows:\n");
    for (ptr = &a[0][0]; ptr <= &a[rows - 1][column - 1]; ptr++)
    {
        
      printf("%d ", *ptr);
     
    }
    printf("\n");
    printf("Its matrix form is:\n");
     int (*p)[4]= a;
    
     for(p=a;p<=a+3;p++)
     {
      printf("%d %d %d %d\n",(*p)[0],(*p)[1],(*p)[2],(*p)[3]);
     }
}
