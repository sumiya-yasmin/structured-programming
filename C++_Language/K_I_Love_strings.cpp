// Given two strings S and T. Print a new string that contains the following:
// The first letter of the string S followed by the first letter of the string T.
// the second letter of the string S followed by the second letter of the string T.
// and so on...
// In other words, the new string should be ( S0 + T0 + S1 + T1 + .... ).
// Note: If the length of S is greater than the length of T then you have to add the rest of S letters at the end of the new string and vice versa.
// Input
// The first line contains a number N (1 ≤ N ≤ 50) the number of test cases.
// Each of the N following lines contains two string S, T (1 ≤ |S|, |T| ≤ 50) consists of lower and upper English letters.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s, t;
        cin >> s;
        cin >> t;
        string w = "";
        int slen = s.length();
        int tlen = t.length();
        int mn = min(slen, tlen);
        int k = 0, p = 0;
        for (int i = 0; i < mn; i++)
        {
            if (s.size())
                w += s[k];
            w += t[p];
            k++;
            p++;
        }
        if (slen > tlen)
        {

            for (int i = mn; i < slen; i++)
            {
                w += s[i];
            }
        }
        else
        {
            for (int i = mn; i < tlen; i++)
            {
                w += t[i];
            }
        }

        cout << w << endl;
    }
}