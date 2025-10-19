// Question: Take an integer array A of size N as input.
//  Then take an integer M as input. 
//  You need to take an array B of size M and copy all elements of array A to array B.
//   Delete the array A and then take input of the rest of the elements of array B.
//  After that print array B.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
      cin >>  arr[i];
    }
    int m;
    cin >> m;
    int* arrB = new int[m];
    for(int i=0;i<n;i++){
       arrB[i]=arr[i];
   }
   delete[] arr;
     for(int i=n;i<m;i++){
      cin >>  arrB[i];
    }
      for(int i=0;i<m;i++){
       cout << arrB[i] << " ";
    }
    return 0;   
}