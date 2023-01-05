#include<stdio.h>
void main()
{
    int num,a;
printf (" Enter the number of which u want the multiplication table: ");
scanf("%d", &num);
for ( a=1;a<=10 ;a++)
{
printf("%d * %d = %d\n", num , a ,num * a );
}


}