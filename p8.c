//8. Write a program to compute the sum of all elements in an array using pointers.

#include<stdio.h>

int main()
{
    int arr[20];
    int size, i, sum=0;
    int *ptr;


    printf("Enter the Size of array: ");
    scanf("%d", &size);

    printf("Enter Array Elements: \n");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    ptr = arr;   // store the base address of arr

    for( i = 0; i < size; i++)
    {
        sum = sum + *ptr;
        ptr++;  
    }
    printf("Sum is : %d ", sum);

}

