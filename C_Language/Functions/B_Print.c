//Given a number N. Print all numbers from 1 to N.
#include<stdio.h>

int printNumbers(int n){
    for(int i=1; i<=n;i++){
        printf("%d", i);
        if(i < n){
            printf(" ");
        }
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    printNumbers(n);
    return 0;
}