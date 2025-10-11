//return+ No param
#include<stdio.h>
int checkEvenOdd(){
    int a;
    scanf("%d", &a);
    if(a%2==0){
        return 1;
    }else{
        return 0;
    }
}
int main()
{
    
    int ans = checkEvenOdd();
    if(ans==0){
        printf("ODD");
    }else{
  printf("EVEN");
    }
    return 0;
}
