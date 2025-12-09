// Find duplicate character in array & Remove it

#include <stdio.h>

int main()
{// Baremetal approach to find character:
    int arr[]={1,2,3,4,45,6,7,8,2,3,4,5,6,7,8};
    int len= sizeof(arr)/sizeof(arr[0]);  // or /sizeof(int) or sizeof(*arr)   ; since : arr[0]=*(arr + 0);

    // Print Duplicate Element.
     
    for(int i=0;i<len; i++)
    {
        if(arr[i]=arr[i+1])
         printf(" %d ", arr[i]);

    }

        return 0;
}