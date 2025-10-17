//n odd
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n%2==0){
        return 0;
    }
    int star=1;
    int k=0;
    for(int i=1;i<=n;i=i+2){
        k++;
    }
    int space=k+5-1;
    for(int i=1;i<=k+5;i++){

        for(int j=space;j>=1;j--){
        printf(" ");
       }
       for(int j=1;j<=star;j++){
        printf("*");
       }
       printf("\n");
       star=star+2;
       space--;
    }
    for(int i=1;i<=5;i++){
         for(int j=5;j>=1;j--){
        printf(" ");
       }
        for(int j=1;j<=n;j++){
            printf("*");
        }
        printf("\n");
        
    }
    return 0;
}