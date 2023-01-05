#include<stdio.h>
void main()
{
    int N, seen[10]={0},rem;
    printf("ENter any number: \n");
    scanf("%d",&N);
   while(N!=0)
   {
       rem=N%10;
       if(seen[rem]==1)
       break;
       seen[rem]=1;
       N/=10;
   }
   if(N>0)
   printf("%d is  repeated more than  once in an array",rem);
   else
   printf("No digit is repeated!");
}