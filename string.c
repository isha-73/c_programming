#include<stdio.h>
/*void main()
{
    char s[6]="Hello";
    char t[6];
    int i;
    for(i=0;i<=3;i++)
    {
        t[i]=s[i];
    }
    //t[6]='\0';
    printf("%s\n",t);
*/
int input (char str[],int n)     // proper way tok print the string

{
    int i=0;
    int ch;
    while((ch=getchar())!='\n')  // ascii value is 10
    {
        if(i<n)
        {
            str[i]=ch;
            i++;
        }
    }
    str[i]='\0';
    return i;
}
void main()
{
    char str[100];
    int n=input(str,50);
    printf("%s & %d \n",str,n);
    
}