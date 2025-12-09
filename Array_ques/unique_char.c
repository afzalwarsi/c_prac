
#include <stdio.h>
#include <string.h>
int main()
{
    char s[]= "AAffzazll warrssii";
    
    
    int freq[256] = {0};
    int found_unique=0;     //Flag: take any random

    // Run loop to get count of character and store in array O(n)
// 1. Build Frequency Table
    for (int i = 0; s[i] != '\0'; i++)
       { freq[(unsigned char)s[i]]++;     // Nested Array concept
       }

// 2) Print unique characters (freq == 1)
    for (int i = 0; s[i] != '\0'; i++)
      {  
        // again running loop to check
        if (freq[(unsigned char)s[i]] == 1)
        { 
            printf("%c ", s[i]);  
            found_unique=1;
        }
        // If no Duplicate character found { printf("No Single Character found "); }

            //   if(freq[(unsigned char)s[i]] >1  )
            //     {   
            //     count=1;  
            //     }    
    }

// 3) Post‑processing based on what happened
    if (s[0] == '\0')
    {
        // empty string → print empty line (optional)
        printf("Empty string\n");
        putchar('\n');
    } else if (!found_unique)
    {
        // non‑empty string, but no unique characters
        printf("No unique character\n");
        // fflush(stdout);
    } else 
    {
        // at least one unique printed, just end the line
        // printf("Uniques printed\n");
        putchar('\n');
    }


    //    if(!count)
    //    {
    //       printf(" \n NO single character found "); 
    //    }

    return 0;
}
