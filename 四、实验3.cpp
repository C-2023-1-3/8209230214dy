#include <iostream>
using namespace std;
int main()
{
    bool a[101];
    for (int i = 1; i < 101; i++) {
        a[i] = false;
    }
    for (int i = 1; i < 101; i++) {
        for (int j = 1; j < 101; j++) {
            if(i*j<=100)a[i * j] = !a[i * j];
        }
    }
    for (int i = 1; i < 101; i++) {
        if (a[i] == true)cout <<"L" << i << " ";
    }
    return 0;
}


