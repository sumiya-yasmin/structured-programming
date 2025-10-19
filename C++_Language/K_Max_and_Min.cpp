// Given 3 numbers A, B and C, Print the minimum and the maximum numbers.
// Only one line containing 3 numbers A, B and C ( - 105 ≤ A, B, C ≤ 105)
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    int mx, mn;
    mx = max({x, y, z});
    mn = min({x, y, z});
    cout << mn << " "<< mx;
    return 0;
}
