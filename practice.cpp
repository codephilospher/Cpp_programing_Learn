#include <iostream>
using namespace std;
void print1(int n) {
    for(int i=n; i>=1; i--) {
    for(int j=i; j>=1; j--) {
        cout << "*"<< " ";
    }
    cout << endl;
}
}
void print2(int n) {

    for(int i=0; i<=n; i++) {
    for(int j=1; j<=n-i; j++) {
        cout << j<< " ";
    }
    cout << endl;
}
}
void pyramid(int n) {

    for(int i=0; i<n; i++) {
    for(int j=0; j<=n-i-1; j++) {
        cout << " ";
    }
    for(int k=0; k<=i; k++) {
        cout << "*";
    }
    for(int l=0; l<i; l++) {
        cout << "*";
    }
    cout << endl;
}
}
void reversePyramid(int n) {
    

    for(int i=n; i>0; i--) {
    for(int j=n-i; j>0; j--) {
        cout << " ";
    }
    for(int k=i; k>0; k--) {
        cout << "*";
    }
    for(int l=i-1; l>0; l--) {
        cout << "*";
    }
    cout << endl;
}
}



int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
       int t;
       cin >> t;
       reversePyramid(t);
    }
   
    return 0;
}