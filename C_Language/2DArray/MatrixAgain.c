// You will be given a 2D matrix of N X M size. The matrix will contain integer values only. 
// You need to print the values of the last row and then print the values of the last column in the order they were given.
#include<stdio.h>
int main()
{
   
    int r,c;
    scanf("%d %d", &r,&c);
   
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d", &arr[i][j]);
        }
    }
      
        for(int i=r-1, j=0;j<c;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
          for(int i=0, j=c-1;i<r;i++){
            printf("%d ", arr[i][j]);
        }
    
    return 0;
}