#include <iostream>
using namespace std;

int main() {
    int num1, num2, c;

    cout << "Enter two numbers to find their GCD: ";
    cin >> num1 >> num2;
    
    while (num2 !=0) {
        c = num2;
        num2 = num1 % num2;
        num1 = c;
    }

    cout << "GCD is: " << num1 << endl;
    return 0;
}