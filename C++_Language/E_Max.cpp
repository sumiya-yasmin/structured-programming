// Given a number N, and N numbers,
// find maximum number in these N numbers.

#include <iostream>
#include <algorithm>
#include<limits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mx = max(arr[i], mx);
    }
    cout << mx <<endl;
    return 0;
}