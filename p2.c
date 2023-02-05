//2. Write a function to swap strings of two char arrays of calling functions. (TSRS)

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swap(char **pn1, char **pn2);

int main()
{
  char *a[10], *b[10];

  printf("ENter two strings:\n ");
  //gets(a);
  //gets(b);

  printf("Values before swapping:\n");
  printf("Name1: %s\n", a);
  printf("Name2: %s", b);

  //swap(&a,&b);
  printf("\nValues after swapping:\n");
  printf("Name1: %s\n", a);
  printf("Name2: %s", b);

  return 0;
}

void swap(char **pn1, char **pn2)
{
  char *t;

  t = *pn1;
  *pn1 = *pn2;
  *pn2 = t;

}

