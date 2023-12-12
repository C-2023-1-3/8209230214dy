#include <iostream>
using namespace std;
void count(const char s[], int counts[]) {
    int num1 = 0,num2=0;
    char s1[26];
    for (char a = 'a'; a <= 'z'; a++) {
            s1[num1++] = a;
        }
    while (s[num2] != '\n') {
        for (int i = 0; i < 26; i++) {
            if (s1[i] == s[num2]|| s1[i]-32 == s[num2])counts[i]++;
        }
        num2++;
    }
    for (int i = 0; i < 26; i++) {
        if (counts[i]!=0)cout<<s1[i]<<':'<<counts[i]<<' '<<"times"<<endl;
    }
}
int main()
{
    char s[1000];
    int num = 0;
    int counts[26] = { 0 };
    cout << "Enter a string:";
    cin.get(s[0]);
    while (s[num++] != '\n') {
        cin.get(s[num]);
    }
    count(s, counts);
    return 0;
}
