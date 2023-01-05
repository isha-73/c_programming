/* if a year is divisible by 4 or 400(centurial yr)  then its leap year , except 
centurial yr which is divisible by 100 is not a  leap yr*/
#include<stdio.h>
void main()
{
  int year;
  printf("Enter the  year! ");
  scanf("%d",&year);
  if (year%4==0)
  printf("Yahoo! its a leap year!!!");
  else if (year%400==0)
  printf("Yahoo! its a leap yeear!");
  else if(year%100==0)
  printf("NOO! not a leap year.");
  else
  printf("Ye to haii hi nahi!!!");

}