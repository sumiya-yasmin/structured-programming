// Given 2 numbers N, M and an array A of N numbers. For every number from 1 to M , print how many times this number appears in this array.
#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n];
    int freq[100001]={0};

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(int i=1;i<m+1;i++){
        printf("%d\n", freq[i]);
    }

    return 0;
}