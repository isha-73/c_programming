#include<stdio.h>
struct fun
{
    int x;
    int y;
};
int main()
{
    struct fun a ={1,2};
    struct fun *p = &a;
    printf("x=%d",p->x);  // p->x is same as a.x or (*p).x
    printf("y=%d",p->y); // p->y is same as a.y or (*p).y
    return 0;
}