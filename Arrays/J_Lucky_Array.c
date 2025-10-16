// Given a number N and an array A of N numbers. Determine if the array is lucky or not.
// Note: the array is lucky if the frequency (number of occurrence) of the minimum element is odd.
// Input
// First line contains a number N (2 ≤ N ≤ 1000) number of elements.
// Second line contains N numbers ( - 105 ≤ Ai ≤ 105).
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
    for(int i=0;i<n;i++){
        if(arr[i]<min){
           min=arr[i];
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==min){
           count++;
        }
    }
    if(count%2!=0){
        printf("Lucky");
    }else{
        printf("Unlucky");
    }
    return 0;
}


// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d", &arr[i]);
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 int temp=0;
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     int count=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==arr[0]){
//            count++;
//         }
//     }
//     if(count%2!=0){
//         printf("Lucky");
//     }else{
//         printf("Unlucky");
//     }
//     return 0;
// }