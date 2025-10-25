// Given a string S.Print S after replacing every sub-string that is equal to "EGYPT" with space.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i = 0;
    while (i < s.size()-5)
    {
        if ((s[i] == 'E') && (s[i + 1] == 'G') && (s[i + 2] == 'Y') && (s[i + 3] == 'P') && (s[i + 4] == 'T'))
        {
            s.replace(i, 5, " ");
        }

        i++;
    }
    cout << s;
}