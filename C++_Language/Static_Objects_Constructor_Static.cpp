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

    Student(char n[], int r, char s, int m, char c)
    {
        strcpy(name, n);
        roll = r;
        section = s;
        math_marks = m;
        clss = c;
    }
};
int main()
{
    Student a("Sumaiya", 9, 'A', 99, 12);
    Student b("Sadman", 120, 'B', 100, 12);
    Student c("Mahzabin", 35, 'A', 100, 12);

    Student highest_scorer_in_math = a;
    if (b.math_marks > highest_scorer_in_math.math_marks)
    {
        highest_scorer_in_math = b;
    }
    if (c.math_marks > highest_scorer_in_math.math_marks)
    {
        highest_scorer_in_math = c;
    }
    cout << highest_scorer_in_math.name << " with " << highest_scorer_in_math.math_marks;
    return 0;
}