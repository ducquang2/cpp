#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    // Enter your code here

    // Interesting way
    string num[10] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if (n > 9) {
        cout << num[0];
    }
    else if (n > 0) {
        cout << num[n];
    }
    
    /* Such method
    if (n > 9) {
        cout << "Greater than 9";
    }
    else if (n == 1) {
        cout << "one";
    }
    else if (n == 2) {
        cout << "two";
    }
    else if (n == 3) {
        cout << "three";
    }
    else if (n == 4) {
        cout << "four";
    }
    else if (n == 5) {
        cout << "five";
    }
    else if (n == 6) {
        cout << "six";
    }
    else if (n == 7) {
        cout << "seven";
    }
    else if (n == 8) {
        cout << "eight";
    }
    else if (n == 9) {
        cout << "nine";
    } */
    return 0;
}