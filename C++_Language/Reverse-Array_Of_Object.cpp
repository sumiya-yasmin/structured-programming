// Question: Make a class named Student. Write a program to take a positive integer N as input and make an Student array of size N. 
// Student 
// {
// 	name;
// 	roll;
// 	marks;
// }
// Your task is to reverse the array and print the array of Student.
// Note: name will not contain any spaces.
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main(){
    int n;
    cin >> n;
    Student a[n];
    for(int i=0;i<n;i++){
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
    reverse(a,a+n);
    for(int i=0;i<n;i++){
        if(i==0){
            cout << a[i].name << " " << a[i].roll << " " << a[i].marks;
        }else{
            cout << endl;
            cout << a[i].name << " " << a[i].roll << " " << a[i].marks;
        }
    }

}