#include<stdio.h> // to check whether no. is palindrome or not
void main()
{
 int num, rem,inv=0;
 printf("Enter the number:\n");
 scanf("%d",&num);
 for(;num!=0;)
 //do
 {
     rem= num%10;
     inv= inv*10+rem;
     num/=10;
 }//while(num!=0);
 printf("Reversed number is %d\n",inv);
 if (num==inv)
    {
         printf("This is a Palindrome number!");
    }
 else 
 printf("This is not a Palindrome number ");

}