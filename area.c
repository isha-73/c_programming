#include<stdio.h>
void main()
{
    int rad ;
    float circum, area;
    printf("Enter the radius of a circle: ");
    scanf("%d",&rad);
     area = 3.14 * rad *rad;
     circum = 6.28*rad;
    printf("area is %f ",area);
    printf("circumference is %f",circum);
    
}
