/*#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter any three numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c)
    printf("%d is greatest number",a);
    if(b>a && b>c)
    printf("%d is the greatest number",b);
    if(c>a && c>b)
    printf("%d is the greatest number",c);
}*/


#include <stdio.h>
void main()
{
    int num1, num2, num3;
    printf("Enter any three numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 > num2 && num1 > num3)
        printf("%d is greatest number", num1);
    else if (num2 > num1 && num2 > num3)
        printf("%d is the greatest number", num2);
    else if (num3 > num1 && num3 > num2)
        printf("%d is the greatest number", num3);
}
