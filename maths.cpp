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
void gcd(int a,int b){
    while((a>0) && (b>0)){
        if(a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    if(a==0){
        cout<<"GCD: "<<b<<endl;
    }
    else{
        cout<<"GCD: "<<a<<endl;
    }   
}
void checkArmstrong(int n){
int sum=0;
int copy=n;
int digits=(int)log10(n)+1;

while(copy>0){
    int lastdigit=copy%10;
    sum=sum+pow(lastdigit,digits);
    copy=copy/10;
}
if(sum==n){
    cout<<"The number is an Armstrong number."<<endl;
}
else{
    cout<<"The number is not an Armstrong number."<<endl;
}
}
void AllDivisors(int n){
    vector<int> divisors;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            divisors.push_back(i);
            if(i!=n/i){
                divisors.push_back(n/i);
            }
        }
    }   
    cout<<"All divisors of "<<n<<" are: ";
    for(int i=0;i<divisors.size();i++){
        cout<<divisors[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int choice;
    while (true)
    {
         cout<<"\n=========Basic Maths Menu==========\n"<<endl;
   
    cout<<"1. Count all digits in a number"<<endl;
    cout<<"2. Reverse a number"<<endl;
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