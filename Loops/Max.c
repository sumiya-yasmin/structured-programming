//Given a number N, and N numbers, find maximum number in these N numbers.
#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    int x;
    int max = INT_MIN;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        scanf("%d", &x);
        if(x>max){
            max=x;
        }
    }
    printf("%d", max);
    return 0;
}