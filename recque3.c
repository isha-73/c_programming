#include<stdio.h>
int fun(int j)
{ int i=50;
int k;
if (i==j)
{ printf("something");
k=fun(i);
return 0;
}
else return 0;

}
void main()
{ int t=50;
fun(t);
}