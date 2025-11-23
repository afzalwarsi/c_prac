// 1. Store element in string

#include<stdio.h>
#include<string.h>
int main()
{
    // char str[]= {"Hello", "Hey", "Hi"};
    // char str[] = {"Hello"};
     char str[] = {'A', 'f', 'z' ,'a' ,'l'};
    int size = strlen(str);
    //printf("Printing Stored string\n %s", str[]); // Directly cant so use array to traverse element
    
    printf("\nString Elements are:\n");
    for(int i=0; i<size;i++)
    {
        printf(" %c", str[i]);
    }
    
    return 0;
}