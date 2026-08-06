#include<bits/stdc++.h>
using namespace std;
int factorial(int fact,int n)
{
    if(n == 0){
    return fact;
    }

     factorial(fact*n,n-1);
}

int main()
{
    int n;
    cin >> n;
    cout << "Factorial of " << n << " is " <<factorial(1,n) << endl;
    return 0;
}