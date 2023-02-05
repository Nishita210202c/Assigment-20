//4. Write a program in C to demonstrate how to handle the pointers in the program.

#include<stdio.h>
int main()
{
    int x=5, *p, **q, ***r;
    p=&x;
    q=&p;
    r=&q;

    printf("%d %d %d %d\n", x, *p, **q, ***r);
    printf("%d %d %d %d\n", &x, &p, &q, &r);
    printf("%d %d", q, *r);

}