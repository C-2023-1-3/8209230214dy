#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int a, b,x,y;
    cin >> a >> b;
    int z = a * b;
    
    for (int i =2; i<=sqrt(z); i++) {
        if ((a % i == 0)&&(b%i==0)) {
            x = i; 
        }
    }
    y = a * b / x;
    cout << x <<" " << y << endl;
    return 0;
}