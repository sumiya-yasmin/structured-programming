#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int value= n;
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
        value--;
    }
    return 0;
}