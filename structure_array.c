#include<stdio.h>
struct students 
{
    char name[20]; // why on writing *name only ,pgm stops wuith no output? 
    int rollno;
    int marks;
} ;
int main()
{
    int i;
    struct students s[2];
    for(i=0;i<2;i++)
    {
        printf("Enter the name of student %d\n",i+1);
        scanf("%s",&s[i].name);
        printf("Enter the rollno of student %d\n",i+1);
        scanf("%d",&s[i].rollno);
        printf("Enter the marks of student %d\n",i+1);
        scanf("%d",&s[i].marks);

             }
    for(i=0;i<2;i++)
    {
        printf("For student %d\n",i+1);
        printf("name is %s\n",s[i].name);
        printf("rollno is %d\n",s[i].rollno);
        printf("marks is %d\n",s[i].marks);

    }

}