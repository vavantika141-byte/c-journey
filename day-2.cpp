#include <iostream>
using namespace std;

int main() {
    cout << "============================" << endl;
    cout << "      Simple Calculator     " << endl;
    cout << "============================" << endl;

    char choice;
    do {
        double num1, num2;
        char op;

        cout << "\nEnter first number: ";
        cin >> num1;
        cout << "Enter an operator (+, -, *, /): ";
        cin >> op;
        cout << "Enter second number: ";
        cin >> num2;

        switch(op) {
            case '+':
                cout << "Result: " << num1 + num2 << endl;
                break;
            case '-':
                cout << "Result: " << num1 - num2 << endl;
                break;
            case '*':
                cout << "Result: " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero!" << endl;
                break;
            default:
                cout << "Invalid operator!" << endl;
        }

        cout << "\nDo you want to calculate again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\nThank you for using Simple Calculator!" << endl;
    cout << "============================" << endl;

    return 0;
}
