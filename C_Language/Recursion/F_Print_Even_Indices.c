// Given a number N and an array A of N numbers.
// Print the numbers in even indices in a reversed order.
// Assume array A is 0-based indexing.
// Solve this problem using recursion.
#include <stdio.h>
void even_indices(int arr[], int n, int i){
    if(i<0){
        return;
    }
    if(i%2==0){
        printf("%d ", arr[i]);
    }
    even_indices(arr, n, i-1);
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
    even_indices(arr,n,n-1);
    return 0;
}