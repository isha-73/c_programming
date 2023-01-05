#include<stdio.h>
typedef struct drivers 
{
    char name[20];
    int age;
    char city[20];
    } driver ;
int main()
{    int drivers,i;
    printf("Enter the numbers of drivers");
    scanf("%d",&drivers);
    for (i=1;i<=drivers;i++)
    {
        driver *p = (driver*)malloc(sizeof(driver));
        printf("Enter the name of driver %d \n",i);
        scanf("%s",&(p->name));
        printf("Enter the age of driver %d\n",i);
        scanf("%d",&(p->age));
        printf("Enter the city of driver %d\n",i);
        scanf("%s",&(p->city));
        printf("The name  %s \n",p->name);
        printf("The age %d \n",p->age);
        printf("The city  %s \n",p->city);
    }
}