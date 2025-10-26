// Two string S and W, Remove W from S with #
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string w;
    cin >> s;
    cin >> w;
    string result = "";
    for(int i=0;i<s.size();){
        bool is_word = true;
        if(s[i]==w[0]){
            int j=0;
            int k=i;
            while( j<w.size()){
                 if(s[k]!=w[j]){
                    is_word = false;
                }
                k++;
                j++;
            }

            if(is_word){
                result+= "#";
                i+=w.size();
            }else{
                  result+=s[i];
                i++;
            }
        }else{
            result+=s[i];
            i++;
        }
    }
    cout << result;
    return 0;
}
