// A ticket is a string consisting of six digits.
// A ticket is considered lucky if the sum of the first three digits is equal to the sum of the last three digits.
// Given a ticket, output if it is lucky or not. Note that a ticket can have leading zeroes.
// Input
// The first line of the input contains an integer t
//  (1≤t≤103) — the number of testcases.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        int countA = 0, countB = 0;
        for (int i = 0; i < 6; i++)
        {
            if (i < 3)
            {
                countA += n[i]-'0';
            }
            else
            {
                countB += n[i]-'0';
            }
        }
        if (countA == countB)
        {
            cout << "YES" <<endl;
        }
        else
        {
            cout << "NO" <<endl;
        }
    }
}