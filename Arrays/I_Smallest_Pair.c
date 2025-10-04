//Given a number N and an array A of N numbers. Print the smallest possible result of Ai + Aj + j - i , where 1  ≤  i < j  ≤  N.
#include<stdio.h>
#include<limits.h>
int main()
{
      int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    long long min_result = LLONG_MAX;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            long long current_result = arr[i]+arr[j]+(j+1)-(i+1);
            if(current_result<min_result){
                min_result=current_result;
            }

        }
    }
    printf("%lld", min_result);
    return 0;
}