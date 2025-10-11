//Given a number N. Print a diamond that has 2N rows.
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    //upper
    int star_u=1;
    int space_u = n-1;
    for(int i =1;i<=n;i++){
        for(int j=1;j<=space_u;j++){
            printf(" ");
        }
        for(int j=1;j<=star_u;j++){
           printf("*");
        }
        printf("\n");
        star_u=star_u+2;
        space_u--;
        
    }
    int star= 2*n-1;
    int space=0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<space;j++){
             printf(" ");
        }
        for(int j=1;j<=star;j++){
            printf("*");
        }
        printf("\n");
        star-=2;
        space++;
    }
    return 0;
}