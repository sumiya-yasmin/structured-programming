// Given a number N. Print factorial of N.
// Note: Solve this problem using recursion.
// Only one line containing a number N (1 ≤ N ≤ 20).
#include<stdio.h>
long long printFactorial(int n){
 if(n==0){
    return 1;
 }
 return n* printFactorial(n-1);
}
int main()
{
    int n;
    scanf("%d", &n);
    long long factorial = printFactorial(n);
    printf("%lld", factorial);
    return 0;
}