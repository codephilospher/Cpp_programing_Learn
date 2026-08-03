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
void checkPrime(int n){
    if(n<=1){
        cout<<"The number is not prime."<<endl;
        return;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<"The number is not prime."<<endl;
            return;
        }
    }
    cout<<"The number is prime."<<endl;
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
 

   switch(choice){ 
        case 1:
            int num1;
            cout<<"Enter a number: ";
            cin>>num1;
            countDigits(num1);
            break;
        case 2:
            int num2;
            cout<<"Enter a number: ";
            cin>>num2;
            reverseNumber(num2);
            break;
        case 3:
            int num3;
            cout<<"Enter a number: ";
            cin>>num3;
            checkPalindrome(num3);
            break;
        case 4:
            int a,b;
            cout<<"Enter two numbers: ";
            cin>>a>>b;
            gcd(a,b);
            break;
        case 5:
            int num5;
            cout<<"Enter a number: ";
            cin>>num5;
            checkArmstrong(num5);
            break;
        case 6:
            int num6;
            cout<<"Enter a number: ";
            cin>>num6;
            AllDivisors(num6);
            break;
        case 7:
            int num7;
            cout<<"Enter a number: ";
            cin>>num7;
            checkPrime(num7);
            break;
        case 8:
             cout << "Exiting the program." << endl;
             return 0; 
        default:
             cout << "Invalid choice. Please try again." << endl;   
    
        
    }
    // Pause before looping back to the menu
        cout << "\nPress Enter to return to the menu...";
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear remaining newline from cin
        cin.get(); // wait for user keypress
}
    
   


    return 0;
}
