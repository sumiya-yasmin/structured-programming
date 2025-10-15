#include <stdio.h>
void print_from_1_to_N(int n, int i)
{
    if (i == n + 1)
    {
        return;
    }
    print_from_1_to_N(n, i + 1);
    printf("%d", i);
    if (i > 1)
    {
        printf(" ");
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    print_from_1_to_N(n, 1);

    return 0;
}