//return+parameter
//Take a number as input and check if it is an even number or odd.
#include<stdio.h>


int checkEvenOdd(int a){
    if(a%2==0){
        return 1;
    }else{
        return 0;
    }
}
int main()
{
    int a,b;
    scanf("%d", &a);
    int ans = checkEvenOdd(a);
    if(ans==0){
        printf("ODD");
    }else{
  printf("EVEN");
    }
    return 0;
}




