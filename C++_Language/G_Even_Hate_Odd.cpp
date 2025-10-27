// You are given an array a of n integers. You have two kinds of operations
// increment any element in a (increase it by one).
// decrement any element in a(decrease it by one).
// What is the minimum number of operations to make the number of even elements 
// equal to the number of odd elements, or detect that this is impossible?
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
    if(n%2!=0){
        cout << "-1" <<endl;
        continue;
    }
    int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
    }
    int countEve = 0;
    int countOdd = 0;

    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            countEve++;
        }else{
            countOdd++;
        }
    }
   int target=n/2;
   int diff = abs(countEve - target);
  cout << diff <<endl;
}
}