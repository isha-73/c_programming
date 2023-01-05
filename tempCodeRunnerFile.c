#include<stdio.h>
/*write an encrypt function which takes a string and returns encrypted string. use
ascii + 4 as the encryption formula*/
void encrypt (char *str)
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        str[i] = str[i]+4;
    }
    printf("The encrypted string is :%s",str);
}