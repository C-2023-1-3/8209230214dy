#include <iostream>
using namespace std;
int main()
{
    float a = 2,day=1,money=0;
    while (a <= 100) {
        day++;
        money += a * 0.8;
        a *= 2;
    }
    cout << money / day << endl;
    return 0;
}



