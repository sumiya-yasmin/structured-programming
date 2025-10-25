#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n;
    Student s[n];
    for(int i=0;i<n;i++){
        cin.ignore();
        getline(cin, s[i].name);
        cin >> s[i].roll >> s[i].marks;
    }

    Student mn;
    mn.marks = INT_MAX;
    for(int i=0;i<n;i++){
        if(s[i].marks < mn.marks){
            mn = s[i];
        }
    }
    cout << mn.name << " " << mn.roll << " " << mn.marks <<endl;
}