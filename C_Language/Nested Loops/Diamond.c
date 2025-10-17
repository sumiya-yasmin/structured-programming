#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int star_up=1;
    int space_up=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=space_up;j++){
            printf(" ");
        }
        for(int j=1;j<=star_up;j++){
            printf("*");
        }
        printf("\n");
        star_up+=2;
        space_up--;
    }

    int star_below = 2*n-1;
    int space_below=0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<space_below;j++){
            printf(" ");
        }
        for(int j=1;j<=star_below;j++){
            printf("*");
        }
        printf("\n");
        star_below -=2;
        space_below++;
    }

    return 0;
}