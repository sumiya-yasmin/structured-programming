// Given two numbers N and M, a 2D array of size N * M and a number X.
// Determine whether X exists in the 2D array A or not.
#include <stdio.h>
#include <stdbool.h>
int main()
{
    int r, c, x;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d", &x);
    bool does_exist = false;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == x)
            {
                does_exist = true;
                break;
            }
        }
    }
    if (does_exist)
    {
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }

    return 0;
}