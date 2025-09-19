// Given N numbers. Count how many of these values are even, odd, positive and negative.
#include <stdio.h>
int main()
{
    int n;
    int x;
    int eve = 0, odd = 0, pos = 0, neg = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            eve += 1;
        }
        else
        {
            odd++;
        }

        if (x > 0)
        {
            pos++;
        }
        else if (x < 0)
        {
            neg++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", eve, odd, pos, neg);
    return 0;
}