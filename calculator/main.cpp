#include <iostream>

using namespace std;

int main()
{
    int fist_number;
    int second_number;
    string operand;
    int result;

    cout << "Enter first number: ";
    cin >> fist_number;
    cout << "Enter second number: ";
    cin >> second_number;
    cout << "Enter operand: ";
    cin >> operand;

    if (operand == "+") {
        result = fist_number + second_number;
    } else if (operand == "*") {
        result = fist_number * second_number;
    } else if (operand == "-") {
        result = fist_number - second_number;
    } else if (operand == "/") {
        result = fist_number / second_number;
    } else if (operand == "%") {
        result = fist_number % second_number;
    } else {
        cout << "Error - The operator you entered was not recognised!" << endl;
        return -1;
    }

    cout << fist_number << " " << operand << " " << second_number << " = " << result << endl;

    return 0;
}