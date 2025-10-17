//Take an array from input and count how many odd numbers are present in that array.
#include<stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }
    int sum=0;
     for(int i=0;i<size;i++){
        if(arr[i]%2==1){
            sum+=arr[i];
        }
     }
     printf("%d", sum);
    return 0;
}