#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int *reall(int *p, int size);
int main() 
{  
    int arr[2]= {1,2};
    int *p = (int *) malloc(sizeof(int));
    p=arr;
  int new_size=4; // can take it dynamically too;
  printf("Vaue is:\n ");
     for(int i=0; i <2;i++)
     {
         printf(" %d", *(p+i));
     }
  
//   printf("Enter the type of pointer");

   int *n= reall(p, new_size);

//   n=p;
   
  *(n+2)=3;
//   *(n+3)=4;
   
   printf("\nNew: \n");
    for(int i=0; i <4;i++)
     {
         printf(" %d ", *(n+i));
     }
  
    return 0;
}

int *reall(int *p, int new_size)
{  
    
    int *n= (int *) malloc(new_size* sizeof(int)); //memory=16 to new pointer
    
// 1. copy old , 2nd content missing;
      *n=*p;
     // 
    
    
    return n;
    
}
