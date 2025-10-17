// Given a number N and an array A of N numbers. 
// Print the summation of the array elements.

// Note: Solve this problem using recursion.
#include<stdio.h>
long long sumArray(int arr[], int n){
    if(n<1){
        return 0;
    }
    return (long long)arr[n-1] + sumArray(arr, n-1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    long long res = sumArray(arr,n);
    printf("%lld", res);
    return 0;
}