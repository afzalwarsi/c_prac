#include <stdio.h>
#include <stdlib.h>

void swap(int *a , int *b)
{
    // via 3rd variable
     int temp = *a;
        *a = *b;
        *b = temp;

    //without 3rd variable
    
    // With XOR
    *a =*a + *b;
    *b = *a - *b;
    
    //With bitwise


}


int main()
{
int a=10,b=20;
printf("\n Current values are: a= %d b= %d ", a,b);
 swap(&a,&b);
 printf("\n New value are : a= %d  b=%d", a,b );

 return 0;
}