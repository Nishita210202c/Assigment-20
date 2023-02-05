//9. Write a program to print the elements of an array in reverse order.

#include<stdio.h>

#define N 200

int main()
{
   int arr[5] = {2, 4, 5, 6, 9};
   int i;
   int *ptr;

   ptr = &arr[4]; 
   printf("The Array in reverse order is : \n");
   for(i=0; i<5; i++)
   {
    printf("%d ",  *ptr);
    ptr--;
    
   }





}