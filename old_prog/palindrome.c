// 1. Store element in string
// 2. To check palendrome

#include<stdio.h>
#include<string.h>
int main()
{
    /* --------- Storing Element -----------------
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
    
    ------------------------------------- */
    
     /*--------- Palindrome check  ------- */
     
     char str[] = "HleelH";   //9
     int size = strlen(str);   // Doesnt count Null here
    //  int size_n = sizeof(str);
     // Printing Size
     
     printf("size is %d\n", size);
    Palindrome_check(str,size);
    //  printf("size is %d\n", size_n);
   
              // Pointer Approach
     
    /*-------------------------------------- */
    
    return 0;
}

void Palindrome_check(char str[], int size)
{
        // Normal Approach; odd, even length
    if(size%2==0) //for even
    {
         for(int i=0; i<size; i++)
         {
            if(str[i] == str[size-1-i])    // NOTE:IMPMistake: since array start from 0 therefore last character will be at 3 not 4
            {}
            else 
            {
                return 0;
            }
         }
            printf("\nString is pallendrome\n");
    }
    
}