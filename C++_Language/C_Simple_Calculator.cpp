// Given two numbers X and Y. Print the summation and multiplication 
//and subtraction of these 2 numbers.
// Only one line containing two separated numbers X, Y (1  ≤  X, Y  ≤  105)
#include<iostream>
using namespace std;
int main(){
    long long int x, y;
    cin >> x >> y;
    cout << x << " " << '+' << " " << y << " " << '=' << " "<< x+y << endl;
    cout << x << " " << '*' << " " << y << " " << '=' << " "<< x*y << endl;  
    cout << x << " " << '-' << " " << y << " " << '=' << " "<< x-y << endl;    
    return 0;
}