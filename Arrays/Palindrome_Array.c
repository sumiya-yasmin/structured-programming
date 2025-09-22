// Given a number N and an array A of N numbers. Determine if it's palindrome or not.
// Note:
// An array is called palindrome if it reads the same backward and forward, for example, arrays { 1 } and { 1,2,3,2,1 } are palindromes, while arrays { 1,12 } and { 4,7,5,4 } are not.
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int isPalindrome=1;
    for(int i=0,j=n-1;i<j;i++,j--){
        if(arr[i]!=arr[j]){
            isPalindrome=0;
            break;
        }
    }
    if(isPalindrome){
        printf("YES");
    }else{
    printf("NO"); 
    }
    return 0;
}