#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((a + b > c) && (a - b < c)) {
        cout << a + b + c << endl;
        if ((a == b) || (a == c) || (b == c)) {
            cout << "是等腰三角形";
        }
        else cout << "不是等腰三角形";
    }
    else cout << "不是三角形 ";
    return 0;
}