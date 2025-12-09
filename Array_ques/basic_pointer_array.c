// Pointer vs array
// 1) Array Decay check  2) p=p+1; but can't do : a=a+1;  3) a=p;  

// Bcz if used  in main it will give 20 bytes(5*sizeof(int))   
// but when called in function:      sizeof(a): than equals poi  nter size.  

// void foo(int a[])
// {
//   Note:  sizeof(a);  // Give size of pointer, not array length
// }

#include <stdio.h>

int main()
{
    int arr[]= {1,2,3,4,5};
    int *p = arr;
    int len = sizeof(arr), len1=(sizeof(arr)/sizeof(arr[0])), len2=(sizeof(p)), len3=sizeof(*p), len4=sizeof(&p);

    printf("\n Size of arr: %d",len);
    
    printf("\n Size of 1 arr: %d",len1);
    
    printf("\n Size of pointer: %d",len2);
    
    printf("\n Size of pointer: %d",len3);

    printf("\n Size of pointer: %d",len4);
    

    return 0;

}