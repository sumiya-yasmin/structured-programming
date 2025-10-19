// Given a comparison symbol S between two numbers A and B. Determine whether it is Right or Wrong.
// The comparison is as follows: A < B, A > B, A = B.
// Where A, B are two integer numbers and S refers to the sign between them.
// Input
// Only one line containing A, S and B respectively (-100  ≤  A, B  ≤  100), S can be ('<', '>','=') without the quotes.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    char s;
    cin >> a >> s >> b;
    if(s=='>'){
       if(a>b){
        cout << "Right";
       }else{
        cout << "Wrong";
       }
    } else if(s=='<'){
         if(a<b){
        cout << "Right";
       }else{
        cout << "Wrong";
       }
    }else if(s=='='){
         if(a==b){
        cout << "Right";
       }else{
        cout << "Wrong";
       }
    }
}