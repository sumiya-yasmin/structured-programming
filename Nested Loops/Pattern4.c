#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int space=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=space;j++){
            printf(" ");
        }
        for(int j=i;j>=1;j--){
            int count=1;
            printf("%d",j);
            count++;
        }
        printf("\n");
        space--;
    }
    return 0;
}