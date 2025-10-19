// Given a number N and an array A of N numbers. 
// Print the array in a reversed order.
#include<iostream>
#include<algorithm>
using namespace std;
int main () {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0,j=n-1;i<j;i++,j--){
      swap(arr[i], arr[j]);
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}