#include<stdio.h> 
// use of command  line arguments
int main(int argc , char const *argv[])
{
int i ;
printf("The value of argc is %d\n",argc);
for(i=0;i<argc;i++)
{
printf("The value of argv[%d] is %s\n",i,argv[i]); // argv[0] is the name of the program
// use of command line arguments is to pass the arguments to the program
}
}