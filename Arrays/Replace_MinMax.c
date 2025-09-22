//Given a number N and an array A of N numbers. Print the array after doing the following operations:
// Find minimum number in these numbers.
// Find maximum number in these numbers.
// Swap minimum number with maximum number.
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
    int min= INT_MAX;
    int max= INT_MIN;
    int posmax;
    int posmin;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            posmax= i;
        }
        if(arr[i]<min){
            min=arr[i];
            posmin=i;
        }
    }
    int temp= arr[posmax];
    arr[posmax] = arr[posmin];
    arr[posmin]= temp;
     for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}