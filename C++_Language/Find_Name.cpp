#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
getline(cin, s);
string n;
cin >> n;
stringstream ss(s);
string w;
bool flag = false;
while(ss >> w){
    if(w == n){
       flag=true;
       break;
    }
}
flag ? cout << "YES" : cout << "NO";
}
