//Take an array from input and print all the even numbers of that array.
#include<stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            printf("%d ", arr[i]);
        }
        
    }
    return 0;
}