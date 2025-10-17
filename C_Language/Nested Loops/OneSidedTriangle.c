#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
       for(int j=1, value='A';j<=i;j++,value++){
        printf("%c ", value);
    }
    printf("\n");
    }
    return 0;
}