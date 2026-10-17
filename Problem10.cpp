#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double population = 312032486;
    double secondsInYear = 365.0 * 24 * 60 * 60;

    double births = secondsInYear / 7;
    double deaths = secondsInYear / 13;
    double immigrants = secondsInYear / 45;

    double change = births - deaths + immigrants;

    population = round(population + change);
    cout << population << endl;

    population = round(population + change);
    cout << population << endl;

    population = round(population + change);
    cout << population << endl;

    population = round(population + change);
    cout << population << endl;

    population = round(population + change);
    cout << population << endl;

    return 0;
}