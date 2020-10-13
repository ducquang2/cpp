#include <iostream>
#include <cstdio>
using namespace std;

// first method
int main() {
    int i; long l; char c; float f; double d;
    scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d);
    printf("%d\n%ld\n%c\n%f\n%lf", i, l, c, f, d);
    return 0;
}

/* second method but suck
int main() {
    int i; long l; char c; float f; double d;
    cin >> i >> l >> c >> f >> d;
    cout << i << endl;
    cout << l << endl;
    cout << c << endl;
    cout.precision(3);
    cout << fixed << f << endl;
    cout.precision(9);
    cout << fixed << d << endl;
    return 0;
} */
