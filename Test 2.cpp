#include <iostream>
#include <cmath>  // For pow() function
using namespace std;

void displayMenu() {
    cout << "Calculator Menu:\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "5. Power\n";
    cout << "6. Quit\n";
    cout << "Enter the number of the operation you want to perform: ";
}

int main() {
    int choice;
    double num1, num2, result;
    bool running = true;

    while (running) {
        displayMenu();
        cin >> choice;

        if (choice == 6) {
            cout << "Exiting the calculator. Goodbye!" << endl;
            break;
        }

        // For operations that require two numbers
        if (choice >= 1 && choice <= 5) {
            cout << "Enter the first number: ";
            cin >> num1;
            cout << "Enter the second number: ";
            cin >> num2;
        }

        switch (choice) {
        case 1:
            result = num1 + num2;
            cout << "The result of addition is: " << result << endl;
            break;
        case 2:
            result = num1 - num2;
            cout << "The result of subtraction is: " << result << endl;
            break;
        case 3:
            result = num1 * num2;
            cout << "The result of multiplication is: " << result << endl;
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                cout << "The result of division is: " << result << endl;
            }
            else {
                cout << "Error: Division by zero is not allowed!" << endl;
            }
            break;
        case 5:
            result = pow(num1, num2);
            cout << num1 << " raised to the power of " << num2 << " is: " << result << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }

        // Ask if the user wants to perform another operation
        cout << "\nDo you want to perform another operation? (y/n): ";
        char repeat;
        cin >> repeat;
        if (repeat == 'n' || repeat == 'N') {
            running = false;
            cout << "Exiting the calculator. Goodbye!" << endl;
        }
        cout << endl;
    }

    return 0;
}
