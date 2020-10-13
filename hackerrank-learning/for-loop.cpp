#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a, b;
    int i = 0;
    cin >> a >> b;
    string num[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if ((a < b) && (b <= 9)) {
        for (i = a; i <= b; i++) {
            cout << num[i - 1] << endl;
        }
    }
    return 0;
}