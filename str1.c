#include<stdio.h>
/*void main()
{
    char c[] = "isha2022";
    char *p = c;
    printf("%s",p+p[0]-p[2]); 
    // here , p[0]-p[2] means difference btwn ascii value of 'i' and 'h'
    // so, it will be like  adress of first character of string + the difference btwn ascii value of 'i' and 'h'
}  // thus it will print sha2022
*/
void fun1( char *s1 ,  char *s2)
{
    char *temp;
    temp = s1;
    s1 = s2;
    s2 = temp; // eg of call  by value
}
void fun2(char **s1,char **s2)
{
    char *temp;
    temp = *s1;
    *s1 = *s2;
    *s2 = temp;   //eg of call by reference 
}
void main()
{
    char *str1 = " Hi";
    char *str2 = " Bye ";
    fun1(str1,str2); // adress of first character of string is passed as argument
    printf("%s %s",str1,str2);
    fun2(&str1,&str2); // address of str1 72 pointers been passed   
    printf("%s %s",str1,str2);  
}