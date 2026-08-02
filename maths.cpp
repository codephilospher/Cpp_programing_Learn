#include<bits/stdc++.h>
using namespace std;
void countDigits(int n){
    int cnt=(int)log10(n)+1;
    cout<<"Total digits: "<<cnt<<endl;
}
void reverseNumber(int n){
int revnum=0;
while(n>0){
    int lastdigit=n%10;
    revnum=revnum*10+lastdigit;
    n=n/10;
}
cout<<"Reversed number: "<<revnum<<endl;
}
void checkPalindrome(int n){
int revnum=0;
int copy=n;

while(copy>0){
    int lastdigit=copy%10;
    revnum=revnum*10+lastdigit;
    copy=copy/10;
}
if(revnum==n){
    cout<<"The number is a palindrome."<<endl;
}
else{
    cout<<"The number is not a palindrome."<<endl;
}
}

int main(){
    int choice;
    while (true)
    {
         cout<<"\n=========Basic Maths Menu==========\n"<<endl;
   
    cout<<"1. Count all digits in a number"<<endl;
    cout<<"2. Reverse a numbern"<<endl;
    cout<<"3. Check if a number is palindrome"<<endl;
    cout<<"4. GCD of two numbers"<<endl;
    cout<<"5. check if a number is Armstrong or not"<<endl;
    cout<<"6. Print all Divisors"<<endl;
    cout<<"7. check for a prime number"<<endl;
    cout<<"8. Exit"<<endl;
     cout<<"===================================="<<endl;
     cout<<"Enter your choice: ";
    cin>>choice;
    
        
    }
    
   


    return 0;
}