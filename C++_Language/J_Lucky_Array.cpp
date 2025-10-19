// Given a number N and an array A of N numbers. 
//Determine if the array is lucky or not.
// Note: the array is lucky if the frequency (number of occurrence) of 
//the minimum element is odd.
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
int arr[n];
for(int i=0;i<n;i++){
    cin >> arr[i];
}
int mn= INT_MAX;
for(int i=0;i<n;i++){
    mn = min(arr[i], mn);
}
int count;
for(int i=0;i<n;i++){
      if(arr[i]==mn){
        count++;
      }
}
if(count%2!=0){
    cout << "Lucky";
}else{
    cout << "Unlucky";
}
}