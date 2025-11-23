/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int largest_element(int arr[], int n)
{ 
    int max=0;
    for(int i=0;i<n;i++)
    {
        max=arr[0];
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    return max;
}

int main()
{
 int n=0;
  
    printf("Size of Array");
    scanf("%d",&n);
     int arr[n];
    printf("\n Enter array Element:");
     for(int i=0; i<n;i++)
     {
         scanf("%d",&arr[i]);
     }
      printf("Array Elements are:");
     for(int i=0; i<n;i++)
     {
         printf("%d",arr[i]);
     }
     
    
   int max= largest_element(arr,n);
    printf(" Max Element in array is %d", max);
   
    return 0;
}