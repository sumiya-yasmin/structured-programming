// Take input a matrix and check if it’s a unit matrix or not.
#include <stdio.h>
#include <stdbool.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    if (r != c)
    {
        printf("Not a Unit matrix");
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
    bool is_unit = true;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j)
            {
                if (arr[i][j] != 1)
                {
                    is_unit=false;
                }
            }else{
                if(arr[i][j]!=0){
                    is_unit=false;
                }
            }
        }
    }
    if(is_unit){
        printf("A Unit Matrix");
    }else{
        printf("Not a Unit Matrix"); 
    }
    return 0;
}