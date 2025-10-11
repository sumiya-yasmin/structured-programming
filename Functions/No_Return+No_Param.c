//no return +no param
#include<stdio.h>
void checkEvenOdd(){
    
    int a;
    scanf("%d", &a);
    
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
    
     checkEvenOdd();
    
    return 0;
}