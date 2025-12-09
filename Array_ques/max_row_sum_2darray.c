#include <stdio.h>
#include <stdlib.h>

int main()
{

   int row,col;
printf("\nEnter no. of Rows: ");
scanf("%d", &row);

printf("\nEnter no. of Cols: ");
scanf("%d", &col);

int **arr= (int **) malloc(row*sizeof(int *));
int *arr=  (int*) malloc(col*sizeof(int ));   /// These are same    *(arr+i) = arrr[i]
printf("Enter the %d value ", row*col);
for(int i=0; i<row;i++)
{
    for(int j=0; j<col;j++)
    {
       scanf("%d",arr[i][j]);
    }
    printf("\n");
 // Printing the output
printf("Enter the %d value ", row*col);
for(int i=0; i<row;i++)
{
    for(int j=0; j<col;j++)
    {
       printf("%d ",arr[i][j]);
    }
        printf("\n");
}


return 0;
}