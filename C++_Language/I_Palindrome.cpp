// Given a string S. Determine whether S is Palindrome or not
// Note: A string is said to be a palindrome if the reverse of the string is same as the string. For example, "abba" is palindrome, but "abbc" is not palindrome.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string reversed_s = s;
    reverse(reversed_s.begin(),reversed_s.end());
    if(s == reversed_s){
        cout << "YES";
    }else{
        cout << "NO";
    }

}