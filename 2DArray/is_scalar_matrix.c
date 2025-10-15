// Take input a matrix and check if it’s a scalar matrix or not.
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    if (r != c)
    {
        printf("Not a scalar matrix");
         return 0;
    }
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    bool is_scalar = true;
    int scalar_value = arr[0][0];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j)
            {
                if (arr[i][j] != scalar_value)
                {
                    is_scalar = false;
                }
            }
            else
            {
                if (arr[i][j] != 0)
                {
                    is_scalar = false;
                    break;
                }
            }
        }
    }
    if (is_scalar)
    {
        printf("A Scalar Matrix");
    }
    else
    {
        printf("Not A Scalar Matrix");
    }
    return 0;
}
