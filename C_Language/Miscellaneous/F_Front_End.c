// You are given an array a  of n integers,
// your task is to print the first (front) element 
//then remove it, then print the last(end) element then remove it, 
//and so on until the array becomes empty.
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
       scanf("%d", &arr[i]);
    }
    int first =0;
    int last=0;
    for(int i=0,j=n-1;i<j;i++,j--){
        printf("%d %d ",arr[i], arr[j]);
    }
    if(n%2!=0){
        int mid=(n+1)/2;
        printf("%d ",arr[mid-1]);

    }
    return 0;
}