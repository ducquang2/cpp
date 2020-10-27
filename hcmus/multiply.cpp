#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, multi = 1;

    cout << "Nhap so n: ";
    cin >> n;

    while (n > 0) {
        multi *= (n % 10);
        n /= 10;
    }

    cout << endl << "Tich cac ky so la: " << multi;

    return 0;
}