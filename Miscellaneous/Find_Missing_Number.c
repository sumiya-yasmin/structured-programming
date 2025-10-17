// Given the multiplication of four numbers and three of those numbers,
// find the missing number.
// Note: If the missing number could not be found for the given input, print -1.
// All numbers are non-negative integers.
// Input Format
// The first line will contain t number of test cases.
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);
        long long divisor = a * b * c;
        long long x;
        if (divisor == 0)
        {
            printf("-1");
        }
        else if(m % divisor == 0)
        {
            x = m / divisor;
            printf("%lld", x);
        }
        else
        {
            printf("-1");
        }
        printf("\n");
    }
    return 0;
}