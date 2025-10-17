//Given two numbers X and Y. Print the summation and multiplication and subtraction of these 2 numbers.
#include<stdio.h>
int main()
{
    long long X, Y;
    scanf("%lld %lld", &X, &Y);
    printf("%lld + %lld = %lld\n",X,Y, X+Y);
    printf("%lld * %lld = %lld\n",X,Y, X*Y);
    printf("%lld - %lld = %lld",X,Y, X-Y);

    return 0;
}