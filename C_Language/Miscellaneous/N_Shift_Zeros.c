// Given an array A of size N. 
// Print the array elements after shifting all zeroes in array A to the right.
// Note: Solve this problem using function.
// Input
// First line will contain a number N
//  (1≤N≤103)
//  number of elements.
// Second line will contain N
//  numbers (0≤Ai≤103)

#include<stdio.h>
void shiftZeros(int arr[], int n){
int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
          arr[k]=arr[i];
          k++;
        }
    }
    while(k<n){
        arr[k]=0;
        k++;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    shiftZeros(arr,n);
     for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}