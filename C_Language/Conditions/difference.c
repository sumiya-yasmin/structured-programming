//Given four numbers A, B, C and D. Print the result of the following equation :X = (A * B) - (C * D).
#include<stdio.h>
int main()
{
    long long a,b,c,d;
    scanf("%lld %lld %lld %lld", &a,&b,&c,&d);
    printf("Difference = %lld", (a*b)-(c*d));
    return 0;
}