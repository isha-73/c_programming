#include<stdio.h>
void main()
{
    int a ;
    printf(" Enter the number  ");
    scanf ("%d",&a);
    switch (a)
    {               
    
    case 1:
       
         for( int i=0;i<=10;i++)
         {
            if (i%2==0)
            {
                printf("%d\n",i);
            }
         } break;
    case 2:

    for ( int b = 0; b<=10 ; b++)
    {
        if (b%2!=0)
        {
            printf("%d\n",b);
        }
    } break;
   
    }

}