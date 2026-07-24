#include <iostream>
using namespace std;

int main() {
    cout << "\t\t\t*****WELCOME TO C++ PROGRAMMING*****\t\t\t" << endl;
    cout << "Enter your name: ";
    string name;
    getline(cin >> ws, name);
    cout << "Hello, " << name << "! Welcome to C++ programming." << endl;
    while (true) {
        cout << "\t\t\t*****MENU*****\t\t\t" << endl;
        cout << "1. Display your name" << endl;
        cout << "2. Use calculator" << endl;
        cout << "3. Find factorial" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Your name is: " << name << endl;
                break;
            case 2:{
            double NUM1, NUM2;
            cout << "Enter two numbers: ";
            cin >> NUM1 >> NUM2;
            cout << "You entered: " << NUM1 << " and " << NUM2 << endl;
            cout << "Enter the operation you want to perform (+, -, *, /): ";
            char operation;
            cin >> operation;
            if(operation == '+') {
                cout << "Result: " << NUM1 + NUM2 << endl;
            } else if(operation == '-') {
                cout << "Result: " << NUM1 - NUM2 << endl;
            } else if(operation == '*') {
                cout << "Result: " << NUM1 * NUM2 << endl;
            } else if(operation == '/') {
                if(NUM2 != 0) {
                    cout << "Result: " << NUM1 / NUM2 << endl;
                } else {
                    cout << "Error: Division by zero!" << endl;
                }
            } else {
                cout << "Invalid operation!" << endl;
            }
                break;
        }
            case 3:{
                int num;
                long long factorial = 1;
                cout << "Enter a positive integer: ";
                cin >> num;
                if(num < 0) {
                    cout << "Error: Factorial of a negative number doesn't exist!" << endl;
                } else {
                    for(int i = 1; i <= num; ++i) {
                        factorial *= i;
                    }
                    cout << "Factorial of " << num << " = " << factorial << endl;
                }
                break;
            }
            case 4:
                cout << "Thank you for using our program!" << endl;
                return 0;
                break;
              
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}