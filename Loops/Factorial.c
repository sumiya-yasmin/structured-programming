//Given a number N. Print the factorial of number N.
#include<stdio.h>
int main()
{
    int t;
    int n;
    scanf("%d", &t);
    for(int j=1;j<=t;j++){
        long long fact=1;
        scanf("%d", &n);
        if(n==0){
          fact =1;
        }else{
            for(int i=1;i<=n;i++){
                 fact*=i;
            }
        }
        printf("%lld\n", fact);

    }
    return 0;
}