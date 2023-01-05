#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// to create a command kine utility to add/ subtract/ multiply/ divide two numbers
// first command line must be operation, next argument must be the first number, next argument must be the second number
void main (int argc ,char *argv[])
// atoi is the func of stdlib , which returns the interger value of string
{
   //
    char *operation ;
    int a,b;
    operation = argv[1];
     a = atoi(argv[2]);
     b = atoi(argv[3]);
    if(strcmp(argv[1],"add")==0)
    {
        printf("%d\n",a+b);
    }
    else if(strcmp(argv[1],"sub")==0)
    {
        printf("%d\n",a-b);
    }
    else if(strcmp(argv[1],"mul")==0)
    {
        printf("%d\n",a*b);
    }
    else if(strcmp(argv[1],"div")==0)
    {
        printf("%d\n",a/b);
    }
    else
    {
        printf("Invalid operation\n");
    }
}