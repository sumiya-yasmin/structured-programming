//Given a number N and an array A of N numbers. Print the array after doing the following operations:
//Replace every positive number by 1.
//Replace every negative number by 2.
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        if(arr[i]>0){
            arr[i]=1;
        }else if(arr[i]<0){
              arr[i]=2;
        }
        printf("%d ", arr[i]);
    }
    return 0;
}