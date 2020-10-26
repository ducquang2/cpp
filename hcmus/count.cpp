#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Nhap vao so nguyen n: ";
    cin >> n;
    int i = 0;
    while (n >= 10) {
        n /= 10; // hay n = n /10;
        i++;
    }
    cout << "So luong chu so cua so nguyen la: " << i + 1 << endl;
    
}