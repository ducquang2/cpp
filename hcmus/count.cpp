#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Nhap vao so nguyen n: ";
    cin >> n;
    int dem=0;
    while(n>=10){
        n/=10; // hay n = n /10;
        dem++;
    }
    cout<<"So luong chu so cua so nguyen la: "<<dem+1<<endl;
    
}