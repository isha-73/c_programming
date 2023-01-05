#include<stdio.h>
#include<string.h>
int alternate(char*s)
{
    s ="ebabeefeab";
 int n= strlen(s),z=0,t;
 //printf("%d\n",n);
 int i=0;
 char p[100];
 for(i;i<n;)
 {
     if (s[i]=='a')
     { printf("%d=a\n",i);
       t=0;
       i++;  
     }
    else  if(s[i]=='e')
        { printf("%d=e\n",i);
        t=1;
        i++;   
        }
     if(t!=0&&t!=1)
     {
          printf("%dfinal\n",i);
         p[z]=s[i];
            z++;
            i++;    } 

 }
  p[z]='\0';
  
    printf("%s\n",*p);
    int n1=strlen(*p);
    return n1;
}
void main()
{
    char *s;
    printf("%s",alternate(s));
}