// to prnt a string into other strng
#include <stdio.h>
void main()
{
    char str1[100], str2[100];
    int i;
    str1[100] = "Hey programer! "; // for the spaces in the string
    for(i=0; str1[i]!='\0'; i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
    printf("The copied statement is %s", str2);

}