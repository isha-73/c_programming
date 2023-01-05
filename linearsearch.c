#include <stdio.h>
void main()
{
    int a[50],i,search,n;
    printf("ENter the number of elements in an array\n");
    scanf("%d",&n);
    printf("ENter the %d elements in an array\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the number to be searched\n");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(a[i]==search)
       { printf("The %d is at %dth location\n",search,i+1);
      break;
       }
    }
    if (a[i]!=search)
    printf("The %d is not in an array",search);


}