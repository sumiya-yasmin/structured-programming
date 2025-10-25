// In an ICPC contest, balloons are distributed as follows:

// Whenever a team solves a problem, that team gets a balloon.
// The first team to solve a problem gets an additional balloon.
// A contest has 26 problems, labelled A, B, C, ..., Z.
// You are given the order of solved problems in the contest, denoted as a string s, where the i-th character indicates that the problem si
// has been solved by some team. No team will solve the same problem twice.
// Determine the total number of balloons that the teams received. Note that some problems may be solved by none of the teams.
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
        string s;
        cin >> s;
        int count[26] = {0};

        int total=0;
        for (int i = 0; i < s.size(); i++)
        {
            if (count[s[i] - 'A'] == 0)
            {

                count[s[i] - 'A'] += 2;
            }
            else
            {
                count[s[i] - 'A']++;
            }
        }
    for(int i=0;i<26;i++){
        total+= count[i];
    }
    cout << total << endl;
    }
}