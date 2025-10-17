//no return +param
#include<stdio.h>
void checkEvenOdd(a){
    
    int ans=0;
    if(a%2==0){
        ans= 1;
    }else{
        ans= 0;
    }
    if(ans==0){
        printf("ODD");
    }else{
  printf("EVEN");
    }
}
int main()
{
    int a;
    scanf("%d", &a);
    
     checkEvenOdd(a);
    
    return 0;
}

