// Conversion of degree celcius into farenhiet
#include<stdio.h>
void main()
{
    float deg , far ;
    printf ("Enter the temperature in degree : ");
    scanf("%f", &deg);
    far = (deg * 1.8 )+ 32;
    printf(" The temperature in farenhiet is %f ", far);
}