// Given a mathematical expression. 
//The expression will be one of the following expressions:
// A + B = C, A - B = C and A * B = C
// where A, B, C are three numbers, S is the sign between A and B, and Q the '=' sign
// Print "Yes" If the expression is Right , Otherwise print the right answer of the expression.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    char s,q;
    cin >> a >> s >> b >> q >> c;
    if(s=='+'){
       if(a+b==c){
        cout << "Yes";
       }else{
        cout << a+b;
       }
    } else if(s=='-'){
         if(a-b==c){
        cout << "Yes";
       }else{
        cout << a-b;
       }
    }else if(s=='*'){
         if(a*b==c){
        cout << "Yes";
       }else{
        cout << a*b;
       }
    }
}