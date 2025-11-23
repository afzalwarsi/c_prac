/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#include<stdbool.h>

int flowercheck(int arr[], int size, int n);

int main()
{
    printf("Hello World\n");
    
    

int arr[]= {1,0,0,0,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,0,0,0,0,1},n=6;
int size= sizeof(arr)/sizeof(arr[0]);



int result = flowercheck(arr,size,n);
printf("Bool value is %d", result);
// Another approach to printf
// printf("Bool is %s", result?true:false);

    return 0;
}

int flowercheck(int arr[], int size,int n)
{ int count =0,res;

    for (int i=0; i<size; i++)
    {
        
        int prev = (i == 0) ? 0 : arr[i - 1];
        int next = (i == size - 1) ? 0 : arr[i + 1];
        if((prev==0 && arr [i] == 0 && next == 0))
        {
        arr[i]=1;
        count++;
        
        i++;   // important
        }
    }
    printf("Count is %d", count);
    
    if (count>= n)
        res= 1;
        else 
        res=0;
    return res;
}