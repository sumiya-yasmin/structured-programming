//Given a number N and an array A of N numbers. Print the lowest number and its position.
//Note: if there are more than one answer print first one's position.
#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int lowest = INT_MAX;
    int pos;
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        if(arr[i]<lowest){
            lowest = arr[i];
            pos=i;
        }
    }
    printf("%d %d", lowest, pos+1);
    return 0;
}