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

};
bool cmp(Student a, Student b){
   return (a.eng_marks==b.eng_marks)? (a.math_marks==b.math_marks? a.id<b.id : a.math_marks>b.math_marks) : (a.eng_marks>b.eng_marks);
}
int main(){
    int n;
    cin >> n;
    Student s[n];
    for(int i=0;i<n;i++){
        cin >> s[i].name >> s[i].cls >> s[i].sec >> s[i].id >> s[i].eng_marks >> s[i].math_marks;
        
    }
   sort(s,s+n,cmp);
    for(int i=0;i<n;i++){
        cout << " " << s[i].name << " "  << s[i].cls << " " << s[i].sec << " " << s[i].id << " " << s[i].eng_marks << " " << s[i].math_marks <<endl;
    }
}