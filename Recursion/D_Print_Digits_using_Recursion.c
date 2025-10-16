// Given a number N.
// Print the digits of N separated by a space.
// Note: Solve this problem using recursion.
// Input
// First line contains a number T (1 ≤ T ≤ 10) number of test cases.
// Next T lines will contain a number N (0 ≤ N ≤ 109).
#include <stdio.h>
void digit(int n)
{
    if (n == 0)
    {
        return 0;
    }

    digit(n / 10);
    int x = n % 10;
    printf("%d ", x);
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        if (n == 0)
        {
            printf("0");
        }
        digit(n);
        printf("\n");
    }
    return 0;
}