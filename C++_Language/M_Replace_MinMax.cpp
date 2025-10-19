// Given a number N and an array A of N numbers. 
// Print the array after doing the following operations:

// Find minimum number in these numbers.
// Find maximum number in these numbers.
// Swap minimum number with maximum number
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
int arr[n];
for(int i=0;i<n;i++){
    cin >> arr[i];
}
int mn=INT_MAX;
int mx=INT_MIN;
int min_index=0;
int max_index=0;
 for (int i = 0; i < n; i++) {
        if (arr[i] > mx) {     
            mx = arr[i];
            max_index = i;
        }
        if (arr[i] < mn) {     
            mn = arr[i];
            min_index = i;
        }
    }
swap(arr[min_index], arr[max_index]);
for(int i=0;i<n;i++){
    cout << arr[i] << " ";
}
}