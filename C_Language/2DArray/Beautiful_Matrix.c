// Beautiful Matrix
// You've got a 5 × 5 matrix, consisting of 24 zeroes and a single number one. Let's index the matrix rows by numbers from 1 to 5 from top to bottom, let's index the matrix columns by numbers from 1 to 5 from left to right. In one move, you are allowed to apply one of the two following transformations to the matrix:
// Swap two neighboring matrix rows, that is, rows with indexes i and i + 1 for some integer i (1 ≤ i < 5).
// Swap two neighboring matrix columns, that is, columns with indexes j and j + 1 for some integer j (1 ≤ j < 5).
// You think that a matrix looks beautiful, if the single number one of the matrix is located in its middle (in the cell that is on the intersection of the third row and the third column). Count the minimum number of moves needed to make the matrix beautiful.
#include <stdio.h>
int main()
{
    int r = 5, c = 5;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int m = 2, n = 2;
    int indexRow = 0;
    int indexCol = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == 1)
            {
                indexRow = i;
                indexCol = j;
            }
        }
    }
    
    int row_diff = 0, col_diff = 0;
    row_diff = m - indexRow;
    col_diff = n - indexCol;
    if(row_diff<0){
        row_diff = -(row_diff);
    }
       if(col_diff<0){
        col_diff = -(col_diff);
    }
  printf("%d", col_diff+row_diff);
    return 0;
}