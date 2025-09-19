// Given a number N. Print the digits of that number from right to left separated by space.
#include <stdio.h>
int main()
{
    int t;
    int n;
    int x;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        do
        {
            x = n % 10;
            n = n / 10;
            printf("%d ", x);
        } while (n != 0);
        printf("\n");
    }
    return 0;
}
