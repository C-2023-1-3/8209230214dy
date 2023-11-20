#include <iostream>
#define PI 3.14
using namespace std;
int main()
{
    int r, h,V;
    cin >> r >> h;
    V = r * r * h * PI / 3;
    cout << V << endl;
    return 0;
}
