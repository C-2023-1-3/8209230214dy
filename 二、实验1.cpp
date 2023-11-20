#include <iostream>
using namespace std;
int main()
{
    char a;
    cin >> a;
    if ((a >= 'a') && (a <= 'z')) {
        cout << char(toascii(a) - 32) << endl;
    }
    else {
        cout << toascii(a) + 1 << endl;
    }
    return 0;
}
