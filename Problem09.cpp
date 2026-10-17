#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int p = 5;

    cout << left << setw(2) << "p"
         << right << setw(9) << "p*5"
         << setw(9) << "p*10" << endl;

    cout << left << setw(2) << p
         << right << setw(9) << p * 5
         << setw(9) << p * 10 << endl;

    p = 10;

    cout << left << setw(2) << p
         << right << setw(9) << p * 5
         << setw(9) << p * 10 << endl;

    p = 25;

    cout << left << setw(2) << p
         << right << setw(9) << p * 5
         << setw(9) << p * 10 << endl;

    p = 50;

    cout << left << setw(2) << p
         << right << setw(9) << p * 5
         << setw(9) << p * 10 << endl;

    return 0;
}