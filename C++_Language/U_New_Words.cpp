// Given a string S
// .Print number of times that "EGYPT" word can be formed from S
// 's characters.
// Note: Case of the letters doesn't matter. For example: "Egypt", "egypt" and "eGyPt" are the same.
// Input
// Only one line contains a string S(1≤|S|≤106)
//  where |S| is the length of the string and it consists of lowercase and uppercase English letters.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int e=0, g=0, y=0, p=0, t=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='e'|| s[i]=='E'){
           e++;
        }
        if(s[i]=='g'|| s[i]=='G'){
           g++;
        }
        if(s[i]=='y'|| s[i]=='Y'){
           y++;
        }
        if(s[i]=='p'|| s[i]=='P'){
           p++;
        }
        if(s[i]=='t'|| s[i]=='T'){
           t++;
        }
    }
int count=0;
int mn = min({e,g,p,y,t});
cout << mn;
}
