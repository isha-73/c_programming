#include <stdio.h>
void main()
{
    /*int i=1024,count=0;
    for(;i;i>>=1)
    {
        count++;
        printf("%d\n",count);
        printf("Hello WOrld  %d\n",i);

    }
    int i = 0;
    for (i = 1; i < 20; i++)
    {
        switch (i)
        {
        case 0:          // as here is no break statement, 
                       // it will go to default case
            i += 5;

        case 1: 
            i += 2;
        case 5:
            i += 5;
        default:
            i += 4;
        }
        printf("%d\n", i);
    }
    
   int i= -5;
   while(i<=5)
   {
      if(i>=0)
      break; // here breaks the loop
     // { printf("%d\n",i);}
      else 
      {
          i++;
          continue;
        
      } printf("Happy Valentine's Day\n");
   }
   int i=0;
   for (printf("one\n"); i<3 && printf(""); i++)
   {
       printf("Hii!\n"); // here , only one will print as in AND  printf("");is false, so it will not print 
   }

   int i =500;    // here , range of unsigned int(4 bytes)
  while(i++!=0);      // 0 to 4294967295 , when it reaches 4294967295 ,becoz of i++ it will bcome back again to 0
    //as 0 is not equal to 0 is false therefore we come outside off the loop,and after  iterating due to i++ it will be 1
  printf("%d",i);
*/
int i = 3;
if(i==2); i=0;
if(i==3) 
i++;
else i+=2;
printf("%d",i);
}