#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a, b;
    char c;
    cin >> a >> c >> b;
    if (c == '+')cout << a + b;
    else if (c == '-')cout << a - b;
    else if (c == '*')cout << a * b;
    else if (c == '/') {
        if (b == 0)cout << "运算错误";
    else cout << a / b; 
    }
    else if (c == '%')cout << a % b;
    else {
        cout << "运算错误";
    }
    return 0;
}