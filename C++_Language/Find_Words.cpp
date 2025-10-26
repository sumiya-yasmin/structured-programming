// Take a sentence S as input and then take another string word X 
// as input. Then count how many times the word X appeared in the 
// sentence. The words in the sentence are separated by spaces.
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string x;
    getline(cin,s);
    cin >> x;
    stringstream ss(s);
    string w;
    int count =0;
    while(ss >> w){
        if(w==x){
         count++;
        }
    };
    cout << count;
}