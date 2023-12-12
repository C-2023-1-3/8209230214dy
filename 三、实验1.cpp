#include<cmath>
#include <iostream>
using namespace std;
int gy(int a, int b) {
    int c=1;
    for (int i = 1; i <= sqrt(a*b); i++) {
        if (a% i == 0&&b%i==0)c = i;
    }
    return c;
}
int gb(int a, int b) {
    return a * b / gy(a, b);
}
int main()
{
    int m,n;
    cin >> m >> n;
    cout << gy(m, n) <<endl<< gb(m, n) << endl;
    return 0;
}


