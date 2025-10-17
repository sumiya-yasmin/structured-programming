// Given two numbers X and Y, Print their summation.
// Note: Solve this problem using function.
// Input
// Only one line contains two numbers X and Y (0 ≤ X, Y ≤ 105).
#include<stdio.h>
int sum(int x, int y){
    return x+y;
}

int main()
{
    int x,y;
    scanf("%d %d", &x,&y);
    int res = sum(x,y);
    printf("%d", res);
    return 0;
}