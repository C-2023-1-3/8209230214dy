// 四、实验1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int a[10];
    int b,c=0;
    bool flag = true;
    cout << "Enter ten numbers:";
    cin >> b;
    a[0] = b;
    for (int i = 1; i < 10; i++) {
        cin >> b;
        flag = true;
        for (int j = 0; j <= c; j++) {
            if (b == a[j]) {
                flag = false;
            }
        }
        if (flag == true) {
            c++;
            a[c] = b;
        }
    }
    cout << "The distinct numbers are:";
    for (int i = 0; i <= c; i++) {
        cout << a[i] << " ";
    }
    return 0;
}



