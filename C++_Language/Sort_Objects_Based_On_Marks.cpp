#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int cls;
    char sec;
    int id;
    int math_marks;
    int eng_marks;
    int total ;

};
bool cmp(Student a, Student b){
   return (a.total==b.total)? a.id<b.id : (a.total>b.total);
}
int main(){
    int n;
    cin >> n;
    Student s[n];
    for(int i=0;i<n;i++){
        cin >> s[i].name >> s[i].cls >> s[i].sec >> s[i].id >> s[i].math_marks >> s[i].eng_marks;
        s[i].total=s[i].math_marks+s[i].eng_marks;
    }
   sort(s,s+n,cmp);
    for(int i=0;i<n;i++){
        cout << " " << s[i].name << " "  << s[i].cls << " " << s[i].sec << " " << s[i].id << " " << s[i].eng_marks << " " << s[i].math_marks << " " << s[i].total <<endl;
    }
}