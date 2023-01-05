#include<stdio.h>
// a program to find out whether student is pass or failed , it takes40% and at keast 33% in each
// assuming 6 subjects 
int score(int marks[10],int total)
{
    // this functions is calculating score in percentage 
    int i,sum=0,per1,per2; //here sum is sum of all marks scored by stu
       for(i=0;i<6;i++)
    {
      per1= ((float)marks[i]/total)*100;
      printf("percentage score of sub%d=%d\n",i+1,per1);
      if(per1>=33){ printf("passed in sub%d\n",i+1);}
      else printf("failed in sub%d\n",i+1);
      per1=0;
      sum=sum + marks[i];
    }
    printf("the sum of total marks in all 6 subjects scored is %d\n",sum);
    per2 =((float)sum/(total*6))*100;
    printf("The overall percentage score of student is all subjects is %d\n",per2);
    if(per2>=40)
    printf("The student id passed in this academic year\n");
    else printf("student is failed , try again next year\n");
    return 0;
    }
void main()
{
    int marks[10],i,total; 
    printf("enter the marks in each subjects: ");
    for (i=0;i<=5;i++)
    { scanf("%d",&marks[i]); }
     printf("The total marks to be obtained in each sub\n");
     scanf("%d",&total);
    score(marks,total);
     
}
