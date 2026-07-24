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
/* 
1
21
321
4321
*/
 void displayReverseTriangularPattern(int reverseHeight){
    cout << "\nReverse Triangular Pattern:\n";
    for (int i=0; i<reverseHeight; i++){
        for (int j=i+1; j>0; j--){
            cout << j << "  ";
        }
        cout << endl;
    }
 }
void displayFloydsTriangle(int floydHeight) {
    cout << "\nFloyd's Triangle Pattern:\n";
    int num = 1;
    for (int i = 1; i <= floydHeight; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << "  ";
            num++;
        }
        cout << endl;
    }
}
void  displayInvertedTriangle(int invertedHeight) {
    cout << "\nInverted Triangle Pattern:\n";
    int num = 1; // You can change this value to adjust the height of the inverted triangle
    for (int i = 1; i <= invertedHeight; i++) {
        for (int j = invertedHeight; j >= i; j--) {
            cout << num << "  ";
          
        }
          num++;
        cout << endl;
    }
}
int main() {
    int choice;

    while (true) {
        cout << "\n========== PATTERN MENU ==========\n";
        cout << "1. Display square pattern\n";
        cout << "2. Display  triangular pattern\n";
        cout << "3.Display reverse triangular pattern\n";
        cout << "4.FLoyd's triangle pattern\n";
        cout << "5. Inverted triangle pattern\n";
        cout << "6. Exit\n";
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
                cout << "Reverse Triangular Pattern:\n";
                cout << "Enter the height of the reverse triangular pattern: ";
                int reverseHeight;
                cin >> reverseHeight;
                displayReverseTriangularPattern(reverseHeight);
                break;
            case 4:
                cout << "Floyd's Triangle Pattern:\n";
                cout << "Enter the height of Floyd's triangle: ";
                int floydHeight;
                cin >> floydHeight;
                displayFloydsTriangle(floydHeight);
                break;
            case 5:
                cout << "Inverted Triangle Pattern:\n";
                cout << "Enter the height of the inverted triangle: ";
                int invertedHeight;
                cin >> invertedHeight;
                displayInvertedTriangle(invertedHeight);
                break;
            case 6:
                cout << "Exiting pattern menu.\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
}