// Given a number N and an array A of N numbers.
//Print the maximum value in this array.
// Note: Solve this problem using recursion.
// Input
// First line contains a number N (1 ≤ N ≤ 103) number of elements.
// Second line contains N numbers ( - 109 ≤ Ai ≤ 109).
#include<stdio.h>
#include<limits.h>
int findMax(int arr[], int n, int i, int current_max){
    if(i==n){
        return current_max;
    }
 int max= current_max;
if(arr[i]>max){
    max=arr[i];
}
return findMax(arr,n,i+1, max);


}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
     scanf("%d", &arr[i]);
    }
    int max = findMax(arr,n,0, INT_MIN);
    printf("%d", max);
    return 0;
}


// int findMax(int arr[], int n, int i){
//     if(i==n){
//         return INT_MIN;
//     }
// int max= findMax(arr,n,i+1);;
// if(arr[i]>max){
//     return arr[i];
// }else{

//     return max; 
// }

// }