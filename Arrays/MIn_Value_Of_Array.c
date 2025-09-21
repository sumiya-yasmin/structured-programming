//Take an array from input and print the minimum value of that array.
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
    int min = INT_MAX;
    for(int i=0;i<size;i++){
        if (arr[i]< min){
            min=arr[i];
        }
    }
    printf("%d", min);
    return 0;
}