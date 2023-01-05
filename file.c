#include<stdio.h>
void main()
{  // use of fopen  , fscanf , fprintf , fclose`
    FILE *ptr = NULL;
   ptr = fopen("file.txt","r");
   char str[100];
  /* fscanf(ptr,"%s",&str);
    printf("%s",str);*/
    /* ptr = fopen("file.txt","w");
    fprintf(ptr,"%s","hello");*/
    // use of fgets , fputs ,fgetc , fputc
    ptr = fopen("file.txt","r");
    int c = fgetc (ptr);
    printf("%c\n",c);
    printf("%c\n",c);
    fgets(str,5,ptr);
    printf("%s",str);
ptr = fopen("file.txt","w");
    fputc('u',ptr);
    fputs("hey\n",ptr);



}