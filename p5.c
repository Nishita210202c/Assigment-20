//5. Write a program to find the maximum number between two numbers using a pointer

#include<stdio.h>

int main()
{
   int p=5, *a, q=8, *b;
   a = &p;
   b = &q;

   if(*a > *b)
   {
    printf("p = %d is Maximum", *a);
   }
   else{
    printf("q = %d is Maximum", *b);
   }

}

