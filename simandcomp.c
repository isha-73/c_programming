#include<stdio.h>
#include<math.h>
#define p 5000
void main()
{
    float t,n, r,si , ci;
    printf("The principal amount is %d\n",p);
        printf("Enter the rate of interest\n");
      scanf("%f",&r);
    printf("Enter the time periof\n");
      scanf("%f",&t);
      printf("Enter the number  of times it should be repeated\n");
      scanf("%f",&n);
    si= (p*r*t)/100;
    ci=p*pow((1+(r/100*n)),n*t)-p;
    printf("The simple interest is  %f and compound interest is %f",si,ci);


}