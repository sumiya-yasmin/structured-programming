#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int hash = 1, space = n - 1;
    int row_num=1;
    int hash_d = 2*n - 3, space_d = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= hash; j++)
        {
            if (row_num % 2 != 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
        space--;
        hash += 2;
        row_num++;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= space_d; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= hash_d ;j++)
        {
            if (row_num % 2 != 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
        space_d ++;
        hash_d -= 2;
        row_num++;
    }
    return 0;
}