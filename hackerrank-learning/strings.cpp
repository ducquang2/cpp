#include <iostream>
#include <string>
using namespace std;

// First way to solve
int main() {
    string a, b;
    cin >> a >> b;

    cout << a.length() << " " << b.size() << endl;
    
    cout << a + b << endl;

    swap(a[0], b[0]);
    cout << a << " " << b << endl;

    return 0;
}

/* Second way to solve
int main() {
    string a, b;
    char temp;
    cin >> a >> b;
    
    cout << a.size() << " " << b.length() << endl;
    
    cout << a + b << endl;
    
    temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    cout << a << " " << b << endl;

    return 0;
}
*/

