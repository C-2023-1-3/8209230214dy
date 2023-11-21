#include <iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
    char str[1024];
    int i = 0,a=0,b=0,c=0,d=0;
    while ((str[i] = getchar()) != '\n')i++;
    for (int j = 0; j <= i; j++) {
        if (str[j] == ' ')b++;
        else if (((str[j] >= 'A') && (str[j] <= 'Z')) || ((str[j] >= 'a') && (str[j] <= 'z')))a++;
        else if ((str[j] >= '0') && (str[j] <= '9'))c++;
        else d++;
    }
    cout << a << " " << b <<" " << c <<  " " << d-1 << endl;
    return 0;
}