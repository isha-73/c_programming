// concatenate two strings withou using strcat
#include <stdio.h>
#include <string.h>
void main()
{
    char str1[100] = " Good ";
    char str2[100] = "Morning ";
    int i=0, len=0;
    while(str1[len]!='\0')
     {
         len = len+1;
     }
     
     for (i=0; str2[i]!='\0'; i++)
     {
        str1[len] = str2[i];
        len = len+1;
     }
     str1[len] = '\0';
     printf("The concatinated ");
     puts (str1);
   
}