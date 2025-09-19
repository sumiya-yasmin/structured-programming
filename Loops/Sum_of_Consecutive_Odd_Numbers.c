//Given two numbers X and Y. Print the sum of all odd numbers between them, excluding X and Y.
#include<stdio.h>
int main()
{
    int t;
    int x,y;
    scanf("%d", &t);
    for(int j=1;j<=t;j++){
        scanf("%d %d", &x,&y);
        int start = (x < y) ? x : y;
        int end = (x > y) ? x : y;
        int sum=0;
        for(int i=start+1;i<end;i++){
            if(i%2==1){
                sum+=i;
            }
        }
            printf("%d\n", sum);
    }

    return 0;
}