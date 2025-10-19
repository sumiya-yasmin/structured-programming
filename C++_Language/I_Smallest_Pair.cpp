// Given a number N and an array A of N numbers.
// Print the smallest possible result of Ai + Aj + j - i ,
//  where 1  ≤  i < j  ≤  N.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int mn = INT_MAX;
        int res = 0;
        for (int i = 1; i <= n - 1; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                res = arr[i] + arr[j] + j - i;
                mn = min(res, mn);
            }
        }
        cout << mn;
    }
}