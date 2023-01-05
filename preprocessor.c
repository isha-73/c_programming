#include<stdio.h>
void main()
{
    printf("Todays date is %s\n", __DATE__);
    printf("Time is %d\n", __TIME__);
    printf("File name is %s\n", __FILE__);
    printf("Line number is %d\n", __LINE__);
    printf("Compiler used is %s\n", __VERSION__);
    printf("ANSI: %d",__STDC__);
}
