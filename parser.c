#include<stdio.h>
#include<string.h>
void parser(char *str)
{
   int i, in=0 , index =0;
   for (i=0;i<strlen(str);i++)
   { 
     if (str[i]=='<')
     { in =1;
     continue;
     }
      else if (str[i]=='>')
      {
        in =0;
        continue;
      }
      if  (in==0)
      {
        str[index]=str[i];
        index++;
      }
         }  
   str[index]='\0';
  while(str[0]==' ')
  {   // to remove the leading spaces
      for(i=0;i<strlen(str);i++)
      {
        str[i]=str[i+1];
      }
  }
  while(str[strlen(str)-1]==' ')
  { // to remove the trailing spaces
      str[strlen(str)-1]='\0';
  }
     
}
void main()
{
    char html[]= "<h1>>>>>    Hello world   <<<<</h1>";
                 parser(html);
                 printf(" The parsed string is %s",html);

}