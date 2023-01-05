/* Prime no.=The number greater than 1 , if it has 
only two  factors namely 1 and itself.
Composite no.= A number is positive integer which is not prime i.e.. which 
has factors other than 1 and itself.
"In order to find whether numb is prime or not , calculate its sq.root  and then divide it by num
less than or equal to the square root of that  num.If it is divisile by any of those num then 
we can say it is not a pprime num else its a prime num"*/

#include<stdio.h>
#include <math.h>
void main()
{
     int num,i,root,count=0;
printf("Give a number to check:\n");
scanf("%d",&num);
root = (sqrt(num));
printf("The sqroot of %d is %d\n",num,root);
//int q = num;
for(i=2;i<root;i++)
{
    if(num%i==0)
    {
     count=1;
    }
}
if (count==0 && num!=1)
printf("%d is a prime number!!",num);
else
printf("%d is not a prime number",num);
}