// Case Conversion: Upper case to lower Case  : A-=65 ASCII; a=97 : Difference is 32 ;
// check for nmumbers ascii and space remeber



 //----------  2D Array Scenario--------------

#include <stdio.h>
#include <string.h>

int main()
{ 
    
// char str[]={'A', 'B'};
//  char str[]="AFzAL";

 char str[][6]={"AFzAL","WARSI", "HERE"};
// Size of 2D Array calculate
 
// size of str[6]  : char []

 int len = strlen(str);

for(int i=0; i<len;i++)
printf(" %c", str[i]);

for(int i=0; i<len; i++)
 str[i] = str[i] | (1<<5);

// Printf for New Line
 printf("\n");
for(int i=0; i<len;i++)
printf("  %c", str[i]);

}



 //------------------------------------------
//   1D Array scenario

// #include <stdio.h>
// #include <string.h>


// int main()
// { 
    
// // char str[]={'A', 'B'};
//  char str[]="AFzAL";
//  int len= strlen(str);

// for(int i=0; i<len;i++)
// printf(" %c", str[i]);

// for(int i=0; i<len; i++)
//  str[i] = str[i] | (1<<5);

//  // Printf for New Line
//  printf("\n");
// for(int i=0; i<len;i++)
// printf("  %c", str[i]);

// }






//--------------------- Single Character  ----------------------
// #include <stdio.h>
// #include <string.h>


// int main()
// { 
// char x='B';
// printf(" %c", x);

//  x = x | (1<<5);

// printf(" \n %c", x);

// }


//---------------------------------------------------------------