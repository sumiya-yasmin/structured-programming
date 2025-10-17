//Take an array from input and print the maximum value of that array.
#include<stdio.h>
#include<limits.h>
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }
    int max = INT_MIN;
    for(int i=0;i<size;i++){
        if (arr[i]> max){
            max=arr[i];
        }
    }
    printf("%d", max);
    return 0;
}