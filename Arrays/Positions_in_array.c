//Given a number N and an array A of N numbers. Print all array positions that store a number less than or equal to 10 and the number stored in that position.
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        if(arr[i]<=10){
            printf("A[%d] = %d\n", i, arr[i]);
        }
    }
    return 0;
}