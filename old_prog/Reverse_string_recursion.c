/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Reverse a string
// Approach1.: use 2 pointer 1 from start. 2nd from len-1 and swap till half
// Approach 2: str[i] swap to str[lemn-i-i]
// Approach 3: Through Recursion
#include <stdio.h>
#include <string.h>

void reverse_string(char str[])
{  int len= strlen(str);  // gives len ; doesnt include null char
  // Approach 1:

  for(int i=0; i<len/2;i++)
    {  char temp;
        temp = str[i];
        str[i] = str[len-i-1]; // bcz start with 0
        str[len-1-i] = temp;
    }
    
    // Approach 2: via i, j
    //  int i,j;
    //  this will work for 22 string
    //  for(i=0, j=len-1; j>0; i++,j--)
    //     str[j]= str[i];
    
}

void reverse_recursion(char str[], int i, int j)
{
    if(i<=j)
    {
   char temp = str[i];
        str[i] = str[j]; // bcz start with 0
        str[j] = temp;
        i++; j--;
        reverse_recursion(str,i,j);
    }
}

int main()
{    char str[]= "Afzal Warsi";

//   reverse_string(str);
    int len= strlen(str);
    reverse_recursion(str,0,len-1);
    printf("Reversed String is\n");
    
   for(int i=0; i<strlen(str); i++)
    printf("%c", str[i]);
}
