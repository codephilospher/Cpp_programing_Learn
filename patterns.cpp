#include <iostream>
using namespace std;

void displaySquarePattern(int side) {
    cout << "\nSquare Pattern:\n";
    int num = 1;

    for (int i = 1; i <= side; i++) {
        for (int j = 1; j <= side; ++j) {
            cout << num << "  ";
            ++num;
        }
        cout << endl;
    }
}
void displayTriangularPattern(int height) {
    cout << "\nTriangular Pattern:\n";

    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= i; ++j) {
            cout << "*" << "  ";
        }
        cout << endl;
    }

}

int main() {
    int choice;

    while (true) {
        cout << "\n========== PATTERN MENU ==========\n";
        cout << "1. Display square pattern\n";
        cout << "2. Display  triangular pattern\n";
        cout << "3. Exit\n";
        cout << "==================================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
            int side;
            cout << "Enter the size of the square pattern Like(3 for 3x3): ";
            cin >> side;
            displaySquarePattern(side);
                break;
            case 2:
                cout << " Triangular pattern .\n";
                cout << "Enter the height of the triangular pattern: ";
                int height;
                cin >> height;
                displayTriangularPattern(height);
                break;
            case 3:
                cout << "Exiting pattern menu.\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
}