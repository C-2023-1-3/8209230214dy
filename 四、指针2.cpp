#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int parseHex(const char* const hexString) {
    int len = strlen(hexString);
    int res = 0;
    for (int i = 0; i < len; i++) {
        int digit;
        if (hexString[i] >= '0' && hexString[i] <= '9') {
            digit = hexString[i] - '0';
        }
        else if (hexString[i] >= 'a' && hexString[i] <= 'f') {
            digit = hexString[i] - 'a' + 10;
        }
        else if (hexString[i] >= 'A' && hexString[i] <= 'F') {
            digit = hexString[i] - 'A' + 10;
        }
        else {
            return -1; 
        }
        res += digit * pow(16, len - i - 1);
    }
    return res;
}

int main() {
    const char* hexString = "A5";
    int decimal = parseHex(hexString);
    cout << hexString << " in hex is " << decimal << " in decimal." << endl;
    return 0;
}
