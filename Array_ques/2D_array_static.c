#include <stdio.h>

// Approach: Via Row Pointer 

void init(int (*p)[3], int row)
{
    p[1][1]= 4;     // 0,1,2 index is like this: 
}

// By using Single Pointer

void single(int *p, int row, int col)
{
    *( (p+1*col)+ 2 ) = 3;

}
    //  *( *(p+i) +j)

int main()
{
    int arr[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
    
    for(int i=0; i<3;i++)
    { 
        for(int j=0; j<3;j++)
         {
            printf("%d", arr[i][j]);  
         }
    }
    
    printf("\n");
    // init(arr,3);

    
// By using Single Pointer
    single(arr,3,3);

    // via single Pointer

    for(int i=0; i<3;i++)
    {
        for(int j=0; j<3;j++)
        {
            printf("%d", arr[i][j]);
        }
    }
    
    
    return 0;
}