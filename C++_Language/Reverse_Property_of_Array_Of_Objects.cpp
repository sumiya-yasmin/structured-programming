#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int cls;
    char sec;
    int id;

};
int main(){
    int n;
    cin >> n;
    Student s[n];
    for(int i=0;i<n;i++){
        cin >> s[i].name >> s[i].cls >> s[i].sec >> s[i].id ;
    }
    for(int i=0,j=n-1;i<j;i++,j--){
        // char temp=0;
        // temp=s[i].sec;
        // s[i].sec=s[j].sec;
        // s[j].sec=temp;
        swap(s[i].sec,s[j].sec);
    }
    for(int i=0;i<n;i++){
        cout << " " << s[i].name << " " << s[i].cls << " " << s[i].sec << " "  << s[i].id  <<endl;
    }
    return 0;
}