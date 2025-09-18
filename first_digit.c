//Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".
#include<stdio.h>
int main()
{
    int X;
    scanf("%d", &X);
    int f = X/1000;
    if(f%2==0){
        printf("EVEN");
    }else{
        printf("ODD");
    }
    return 0;
}