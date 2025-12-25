/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void reversal(char *s, int len)
{   char temp;
    int i=0;
    int j=len-1;
    
    while (i<j)
    { temp=s[i];
        s[i] =s[j];
        s[j]= temp;
        i++;
        j--;
    }
    
        
    for(int i=0; i<len;i++)
    printf("%c",s[i]);
}

int main()
{
    // int len;
    
    // printf("\nEnter String Length :");
    // scanf("%d",len);
    // getchar();
    
    // char str[len];
    // printf("\nEnter String :");
    // // scanf("%[^\n]c",str);
    // fgets(str,len+1,stdin);
    
    char str[]= "Hello";
    int len= strlen(str);
    
    reversal(str,len);
    
    // for(int i=0; i<len;i++)
    // printf("%c",str[i]);
    

    return 0;
}
