//7. Write a program to count the number of vowels and consonants in a string using a pointer.

#include<stdio.h>

int main()
{
   int count=0, i, count2=0;
   char *str = "Nishita";

   while(*str != '\0')
   {
      if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
      {
        str++;
        count++;
      }
      else{
        str++;
        count2++; 
      }
   }
   printf("vowels are: %d\n", count);
   printf("consonants are: %d ", count2);
   
}
