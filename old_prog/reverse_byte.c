#include<stdio.h>

int findkbit(int k, int a)
{
    int x=(1<<(k-1)) & (a);
    return x;
}
int main()
{ 
    int a=7;
    printf("\nvalue is %b", a);
    
int rev=0;
    for(int i=1; i<=32; i++)
    {
        if(findkbit(i, a)) // find bit is 1 or not
        // set 32-i bit
        
    rev = rev |(1<<(32-i));
        
    }
    printf("\nReverse value is %b", rev);
    return 0;
}