// Given two strings X and Y . Print the smallest lexicographical one.
#include<stdio.h>
int main()
{
    char a[21], b[21];
    scanf("%s %s", a,b);
    int i= strcmp(a,b);
    if(i== -1){
        printf("%s", a);
    }else if(i== 1){
        printf("%s", b);
    }else if(i== 0){
        printf("%s", a);
    }
    return 0;
}