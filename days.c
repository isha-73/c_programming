#include<stdio.h>
void main()
{
    int days, weeks , years, months;
    printf("enter the number of days ");
    scanf("%d",&days);
     weeks = days/7;
     months= days/30;
     years=days/365;
    printf("The no. of weeks are %d\n",weeks);
    printf("The no.of months are %d\n",months);
    printf("The no. of years are %d\n",years);
}
/*#include <stdio.h>
int main()
{
    int total_days, weeks, years, months, days;
    printf("enter the total number of days ");
    scanf("%d", &total_days);
    years = total_days / 365;
    months = (total_days % 365) / 30;
    weeks = (total_days % 365) % 30 / 7;
    days = (total_days % 365) % 30 % 7;
    printf("The Total days are splited as %d years , %d months , %d weeks and %d days\n", years, months, weeks, days);
    return 0;
}
#include <stdio.h>
    int main()
    {
        int total_days, weeks, years, months, days;
        printf("enter the total number of days ");
        scanf("%d", &total_days);
        years = total_days / 365;
        months = (total_days - years * 365) / 30;
        weeks = (total_days - years * 365 - months * 30) / 7;
        days = (total_days - years * 365 - months * 30 - weeks * 7);
        printf("The Total days are splited as %d years\n", years);
        printf("%d months\n",months);
        printf("%d weeks\n",weeks);
        printf("%d days\n",days);
        return 0;
    }*/