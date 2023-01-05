#include<stdio.h>
void main()
{
     float hra,bs,da,gs;
     printf("Enter the basic salary \n");
     scanf("%f",&bs);
if (bs>= 1500)
{
    hra=0.1*bs;
    da=0.9*bs;
}
else 
{hra=500;
da=0.98*bs;
}
gs=da+bs+hra;
printf("THe gross salary is %f",gs);


}