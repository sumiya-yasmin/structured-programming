// Given a number N and a 2D array A of size N * N.
// Print the absolute difference between the summation of its two diagonals (primary diagonal and secondary diagonal).
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &arr[i][j] );
        }
    }
    int sumOfP=0;
    int sumOfS=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sumOfP+=arr[i][j];
            }
            if(i+j==n-1){
               sumOfS+= arr[i][j];
            }
        }
    }
int diff=0;
diff= sumOfP-sumOfS;
if(diff<0){
    diff = -(diff);
}
    printf("%d", diff);
    return 0;
}