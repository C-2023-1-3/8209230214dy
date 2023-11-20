#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    if (x >0&&x<1)cout << 3 - 2 * x;
    if (x >=1&&x<5)cout <<1/(2*x)+1;
    if (x >=5&&x<=10)cout <<x * x;
    return 0;
}
