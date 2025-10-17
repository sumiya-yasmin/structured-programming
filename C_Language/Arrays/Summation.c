//Given a number N and an array A of N numbers. Print the absolute summation of these numbers.
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    long long sum=0;
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
      if(sum<0){
            sum= -(sum);
        }
    printf("%lld",sum);

    return 0;
}