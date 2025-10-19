// Given an array A
//  of size N
// . Print the array elements after shifting all zeroes in array A
//  to the right.

// Note: Solve this problem using function.
#include<bits/stdc++.h>
using namespace std;
void shiftZero(int arr[], int n){
    int k=0;
  for(int i=0;i<n;i++){
    if(arr[i]!=0){
       arr[k]=arr[i];
       k++;
    }
  }
  for(int i=k;i<n;i++){
     arr[i] = 0;
  }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
    cin >> arr[i];
}
     shiftZero(arr,n);
       for(int i=0;i<n;i++){
    cout << arr[i] << " ";
}
}