#include <iostream>
#include <limits>

using namespace std;

int main() {
    int num1, num2;
    char op, choice;

    do {
    cout << "Simple Calculator" << endl;
    cout << "Enter operation (+, -, *, /): ";
    cin >> op;
    cout << "Enter first number: ";
    cin >> num1;
    
    if(cin.fail()) {
        cout << "Invalid input! Please enter numeric values." << endl;
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        continue;
    }
    
    cout << "Enter second number: ";
    cin >> num2;

    if(cin.fail()) {
        cout << "Invalid input! Please enter numeric values." << endl;
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        continue;
    }

        switch (op) {
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
                if (num2 != 0) {
                    cout << "Result: " << num1 / num2 << endl;
                } else {
                    cout << "Error: Division by zero!" << endl;
                }
                break;
            default:
                cout << "Invalid operator! Please use +, -, * or /." << endl;

        }
        cout << "Do you want to perform another operation? (y/n): ";
        cin >> choice;
   
    } while (choice == 'y' || choice == 'Y');

}