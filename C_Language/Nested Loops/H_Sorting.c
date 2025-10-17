// Given a number N and an array A of N numbers. Print the numbers after sorting them.
// Note:
// Don't use built-in-functions.
// try to solve it with bubble sort algorithm or Selection Sort.
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
       scanf("%d", &arr[i]); 
    }
    int temp=0;
    for(int i=0;i<n-1;i++){
       for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
       }
    }
      for(int i=0;i<n;i++){
       printf("%d ", arr[i]); 
    }
    return 0;
}