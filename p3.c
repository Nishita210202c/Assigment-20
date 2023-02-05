//3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]

#include<stdio.h>
#include<stdlib.h>

void sort(int *ptr, int size);
int main()
{
    int a[] = {2, 3, 10, 5, 6, 8, 24, 223, 61, 8}, i;
    sort(a,10);
    printf("THe sorted array is : \n");
    for(i=0; i<10; i++)
    {
       printf("%d ", a[i]);
    }
      return 0;

}

void sort(int *ptr, int size)
{
     int temp;
     

     for(int i=0; i<size-1; i++)
     {
        for(int j=i; j<size; j++)
        {
            if( ptr[i] > ptr[j])
            {
                temp=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=temp;


            }

        }
     }

}