#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int value_u= 1;
    int space_u=n-1;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=space_u;j++){
        printf(" ");
      }
      for(int j=1;j<=value_u;j++){
         printf("%d", j);
      }
      value_u+=2;
      space_u--;
      printf("\n");
    }
    int value_b=2*n-1;
    int space_b=0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<space_b;j++){
            printf(" ");
        }
        for(int j=1;j<=value_b;j++){
            printf("%d", j);
        }
        value_b-=2;
        space_b++;
        printf("\n");
    }
    return 0;
}