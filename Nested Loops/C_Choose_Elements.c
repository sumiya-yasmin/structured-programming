// You are given an array a of n integers, and an integer k
// You can choose at most k elements and get their summation.
// What is the maximum summation you can get?

#include<stdio.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int k;
    scanf("%d", &k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                int temp=0;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    long long sum=0;

    for(int i=0;i<k;i++){
        if (arr[i] <= 0) {
        break; 
    }
       sum+=arr[i]; 
    }
    printf("%lld", sum);
    return 0;
}

