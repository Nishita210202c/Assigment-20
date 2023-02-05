//6. Write a program to calculate the length of the string using a pointer

#include<stdio.h>
#include<stdlib.h>
int lenstr(char *str);
int main()
{
    char str[10];
    int l;


    printf("Enter a string: ");
    fgets(str,sizeof str,stdin);

    l = lenstr(str);
    printf("Length of string is : %d", l-1);
}

int lenstr(char *str)
{
    int count=0;
    while(*str!='\0')
    {
        count++;
        str++;
    }
    return count;
}