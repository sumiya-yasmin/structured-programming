// Question: Create three static objects with the help of the constructor of the following class.
// Student
// {
// 	name;
// 	roll;
// 	section;
// 	math_marks;
// 	cls;
// }
// Then compare those 3 objects and print who got the highest math_marks and print his/her name.
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    char section;
    int math_marks;
    int clss;
};
int main()
{
    Student a, b, c;
    cin >> a.name >> a.roll >> a.section >> a.math_marks >> a.clss;
    cin >> b.name >> b.roll >> b.section >> b.math_marks >> b.clss;
    cin >> c.name >> c.roll >> c.section >> c.math_marks >> c.clss;

    Student highest_scorer_in_math = a;
    if(b.math_marks > highest_scorer_in_math.math_marks){
        highest_scorer_in_math = b;
    }
    if(c.math_marks>highest_scorer_in_math.math_marks){
        highest_scorer_in_math = c;
    }
    cout << highest_scorer_in_math.name << " with " << highest_scorer_in_math.math_marks;
    return 0;
}