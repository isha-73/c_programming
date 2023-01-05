#include<stdio.h>
void main()
{
    float feet , cm;
    printf("Enter the value in cm: ");
    scanf("%f",&cm);
    feet= cm / 30.48;
    printf("%f",feet);
}