#include <iostream>
using namespace std;
bool is_prime(int sum)
{
    int s = sum;
    for (int i =sum; i >=2; i--) {
        if (s % i == 0)s = i;
    }
    if(s==sum&&sum!=1&&sum!=0)return true;
    else return false;
}
int main()
{
    int n = 0;
    for (int i = 2; i <= 100000; i++) {
        if (is_prime(i) == true) {
            cout << i << " ";
            n++;
            if (n%10==0)cout << endl;
            if (n == 200)break;
        }
    }
    return 0;
}
