//Given a number N. Print a pyramid that has N rows.
  /*
  ***
 *****
*******/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star =1;
    int spaces= n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=spaces;j++){
            printf(" ");
        }
        for(int j=1;j<=star;j++){
            printf("*");
        }
        printf("\n");
        spaces--;
        star+=2;
    }
    
    return 0;
}
