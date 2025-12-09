#include <stdio.h>
#include <string.h>

int string_length(char *s)
{ 
    int count=0;
      while((*s)!='\0')   //or str[len]!=0. use const in function para
      {
        count++;
        // Note we are not chnaging s  here; therefore its infintie loop
        // since s is a pointer therefore do s++;
        s++;
      }
    return count;
}

int main()
{  char str[]= "Afzal Warsi";

    // Since Array decays to pointer, while passing to a function.
// Issue: How to pass length, calculate length?
 int len = string_length(str);  
 printf("The length of the String is: %d ", len);

return 0;

}