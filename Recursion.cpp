#include <bits/stdc++.h>
using namespace std;

int factorial( int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

void reversearray(int arr[], int n) {
    if (n <= 1) {
        return;
    }
    swap(arr[0], arr[n - 1]);
    reversearray(arr + 1, n - 2);

  
}

void printArray(const int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void showMenu() {
    cout << "\n===== Recursion Menu =====" << endl;
    cout << "1. Find factorial" << endl;
    cout << "2. Reverse an array" << endl;
    cout << "3. Check if a string is a palindrome" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
}

void palindromestring(string str, int n,int i) {
    if (i >= n / 2) {
        cout << "The string is a palindrome." << endl;
        return;
    }
    if (str[i] != str[n - 1 - i]) {
        cout << "The string is not a palindrome." << endl;
        return;
    }
    palindromestring(str, n, i + 1);
}

int main() {
    int choice;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
        case 1: {
            int n;
            cout << "Enter a number: ";
            cin >> n;
            cout << "Factorial of " << n << " is " << factorial(n) << endl;
            break;
        }
        case 2: {
            int n;
            cout << "Enter array size: ";
            cin >> n;

            int arr[100];
            cout << "Enter " << n << " elements: ";
            for (int i = 0; i < n; i++) {
                cin >> arr[i];
            }

            cout << "Original array: ";
            printArray(arr, n);

            reversearray(arr, n);
            cout << "Reversed array: ";
            printArray(arr, n);
            break;
        }
        case 3: {
            string str;
            cout << "Enter a string: ";
            cin >> str;
            palindromestring(str, str.length(), 0);
            break;
        }
        case 4: {
            cout << "Exiting program..." << endl;
            break;
        }
        default:
            cout << "Invalid choice! Please try again." << endl;
            break;
        }
    } while (choice != 4);

    return 0;
}