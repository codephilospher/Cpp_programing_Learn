#include <iostream>
#include <algorithm>
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
    for(int j=n-i+1; j>0; j--) {
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
void diamond(int n){
    pyramid(n);
    reversePyramid(n);
}

void print4(int n) {
    for(int i=0; i<=2*n-1; i++) {
        int stars=i;
        if(i>n)stars=2*n-i;
        for(int j=1; j<=stars; j++) {
            cout << "*";
         
            }
         
          cout << endl; 
    

}
}
void print5(int n){
    int start=1;
    for(int i=0; i<n; i++){
         if(i%2==0) start=1;
         else start=0;
         for(int j=0; j<=i; j++){
             cout << start;
             start=1-start;
         }
         cout << endl;

      
    }
}
void print6(int n){
    int space=2*n-2;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << j;
        }
        for(int k=0; k<space; k++){
            cout << "*";
        }
        for(int l=i; l>=1; l--){
            cout << l;
        }
        space-=2;
        cout << endl;
    }
}
void print7(int n){
    int num=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}
void print8(int n){
    char ch='A';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << ch<< " ";
          ch++;
           
        }
        ch='A';
          
         
        cout << endl;
    }
}
void print9(int n){

    char ch='A';
    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            cout << ch<< " ";
          ch++;
           
        }
        ch='A';
        cout << endl;
    }
}
void print10(int n){
    char ch='A';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << ch<< " ";
          
           
        }
        ch++;
        cout << endl;
    }
}
void print11(int n){
    char ch='A';
    for(int i=0; i<n; i++){
        //spaces
        for(int j=0; j<=n-i-1; j++){
            cout << " ";
        }
        //alphabets
       char cg='A';
       int breakpoint=(2*i+1)/2;
        for(int j=1; j<=2*i+1; j++){
            cout << cg<< " ";
           if(j<=breakpoint) cg++;
           else cg--;
        }
        //spaces
       for(int j=0; j<=n-i-1; j++){
            cout << " ";
          
           
         
           
        }
        
        cout << endl;
    }
}
void print12(int n){
   
    
    for(int i=0; i<n; i++){
        for( char ch='E'-i; ch<='E'; ch++){
            cout << ch << " ";
           
           
            
        }
        
        
        cout << endl;
       

}

}

void print13(int n){
    
   for (int i = 0; i < n; i++) {
        int stars = n - i;
        int spaces = 2 * i;

        for (int j = 0; j < stars; j++) cout << "*";
        for (int j = 0; j < spaces; j++) cout << " ";
        for (int j = 0; j < stars; j++) cout << "*";

        cout << endl;
    }

    // Bottom Half (Reflected: row count decreases from n-1 down to 0)
    for (int i = n - 1; i >= 0; i--) {
        int stars = n - i;
        int spaces = 2 * i;

        for (int j = 0; j < stars; j++) cout << "*";
        for (int j = 0; j < spaces; j++) cout << " ";
        for (int j = 0; j < stars; j++) cout << "*";

        cout << endl;
    }
  

}
void print14(int n){
    int space=2*(n-1);
    for(int i=0; i<n; i++){
        
        for(int j=0; j<=i; j++){
            cout << "*";
        }
        for(int k=0; k<space; k++){
            cout << " ";
        }
        
        for(int k=i; k>=0; k--){
            cout << "*";
        }
        space=space-2;
        cout << endl;
    }
    for(int i=1; i<n; i++){
        for(int j=n-i; j>0; j--){
            cout << "*";
        }
        for(int k=0; k<2*i; k++){
            cout << " ";
        }
        for(int k=n-i; k>0; k--){
            cout << "*";
        }
        cout << endl;
    }
}
void print15(int n){

   /* for(int i=0;i<n;i++){
            int num=4;
    int space=2;
    int num2=1;
        if(i==0 || i==n-1) num=4;
        else num=1;
        for(int j=0;j<num;j++){
            cout << "*";
        }
        if(i==0 || i==n-1) space=0;
        else space=2;
        for(int k=0; k<space; k++){
            cout << " ";
        }
        if(i!=0 && i!=n-1) num2=1;
        else num2=0;
        for(int l=0;l<num2;l++){
            cout << "*";
        }
        cout << endl;

       

    }
        */
       // Function to print hollow square pattern
   
        // Outer loop for rows
        for (int i = 0; i < n; i++) {
            // Inner loop for columns
            for (int j = 0; j < n; j++) {
                // Print star if it's a border cell
                if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
                    cout << "*";
                // Print space otherwise
                else
                    cout << " ";
            }
            // Move to next line after each row
            cout << endl;
        }
    }
void print16(int n){
    for(int i=0; i<2*n-1; i++){
        for(int j=0; j<2*n-1; j++){
            int top=i;
            int left=j;
            int right=(2*n-2)-j;
            int bottom=(2*n-2)-i;
            cout << n-min(min(top,bottom),min(left,right))<< " ";
        }
       
        cout << endl;
    }
}


int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
       int t;
       cin >> t;
       print16(t);
    }
   
    return 0;
}