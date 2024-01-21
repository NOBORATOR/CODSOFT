#include <iostream>
using namespace std;
int main() {

    double n1, n2, result;
    char oper;

    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    cout << "Choose an operation (+, -, *, /): ";
    cin >> oper;


    if(oper==43){
        result = n1 + n2;
        std::cout << "Result: " << result <<endl;

    }
    else if(oper==45){
        result = n1 - n2;
        cout << "Result: " << result <<endl;
    }
    else if(oper==42){
        result = n1 * n2;
        cout << "Result: " << result <<endl;
    }
    else if(oper==47){
        if (n2 != 0) {
            result = n1 / n2;
            cout << "Result: " << result <<endl;
        } else {
            cout << "Error: Division by zero is not allowed.\n";
        }
        
    }
    else{
        cout << "Invalid operation. Please choose from +, -, *, /.\n";
    }

    return 0;
}
