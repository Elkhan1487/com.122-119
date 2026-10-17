#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    double num1, num2;

    cout << "Enter the first double: ";
    cin >> num1;

    cout << "Enter the second double: ";
    cin >> num2;

    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    cout << num1 << " % " << num2 << " = " << fmod(num1, num2) << endl;

    return0;
}