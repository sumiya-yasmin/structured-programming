//A number of two digits is lucky if one of its digits is divisible by the other.
#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int x= num/10;
    int y=num%10;
    if(x%y==0 || y%x==0){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}