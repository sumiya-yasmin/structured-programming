// Given a number N and an array A of N numbers. 
// Determine if it's palindrome or not.
// An array is called palindrome if it reads the same backward and forward, for example, 
// arrays { 1 } and { 1,2,3,2,1 } are palindromes, 
// while arrays { 1,12 } and { 4,7,5,4 } are not.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    bool is_palindrome=false;
    for(int i=0, j=n-1;i<j;i++,j--){
        if(arr[i]!=arr[j]){
            cout << "NO";
            break;
        }else{
           is_palindrome=true;
        }
    }
    if(is_palindrome){
        cout << "YES";
    }
}