//1. Write a function to swap values of two in variables of calling function. (TSRS)

#include<stdio.h>

void swap(int *, int *);
int main()
{
    int a, b;
    printf("ENter two Numbers: ");
    scanf("%d %d", &a, &b);
    swap(&a,&b);
    printf("%d %d\n", a, b);



}
void swap(int *p, int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;


}