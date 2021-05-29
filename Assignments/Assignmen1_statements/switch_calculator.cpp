#include<iostream>
using namespace std;

int main() {
    char op;
    int number1, number2;

    cout<<"Enter operator: +, -, *, / :";
    cin>>op;

    cout<<"Enter two operands";
    cin>>number1>>number2;

    switch(op) {
        case '+':
            cout << number1 << " + " << number2 << " = " << number1 + number2;
            break;

        case '-':
            cout << number1 << " - " << number2 << " = " << number1 - number2;
            break;

        case '*':
            cout << number1 << " * " << number2 << " = " << number1 * number2;
            break;

        case '/':
            cout << number1 << " / " << number2 << " = " << number1 / number2;
            break;

        default:
            // If the op is other than +, -, * or /, error message is shown
            cout << "Error! op is not correct";
            break;
    }

    return 0;
    }
