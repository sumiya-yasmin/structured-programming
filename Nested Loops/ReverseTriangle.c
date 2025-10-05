#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int value= 2*n-1;
    int space=0;
    for(int i=1;i<=n;i++){
         for(int j=0;j<=space;j++){
           printf(" ");
        }
        for(int j=1;j<=value;j++){
           printf("*");
        }
        printf("\n");
        space++;
        value-=2;
    }
    return 0;
}