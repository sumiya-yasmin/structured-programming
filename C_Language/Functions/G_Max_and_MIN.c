// Given an array A of size N. Print the minimum and the maximum number in the array.

// Note: Solve this problem using function.

#include<stdio.h>
#include<limits.h>
int printMin(int* arr, int n){
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("%d ", min);
        return 0;
}
int printMax(int* arr, int n){
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("%d", max);
        return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printMin(arr,n);
    printMax(arr,n);
    return 0;
}