// program to  print reverse of a string by using recursion
#include <stdio.h>
#include <string.h>
void reverse(char str[], int len)
{
    if (len == 1)
        printf("%c", str[0]);
    else
    {
        reverse(str+1, len - 1);
        printf("%c", str[0]);
    }
    
    
}
int main()
{
    char str[100];
    int len;
    printf("Enter the string\n");
    scanf("%s", str);
    len = strlen(str);
    reverse(str, len);
    return 0;
}