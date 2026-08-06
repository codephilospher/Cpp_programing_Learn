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
    cout << "3. Add future function here" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
}

void futureFunction() {
    cout << "You can add another recursion-based function here later." << endl;
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
            futureFunction();
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