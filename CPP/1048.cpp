#include <iostream>

using namespace std;

int main()
{
    cout.precision(2);
    cout << std::fixed;

    float wage;
    int percentage;

    cin >> wage;

    if (wage >= 0 && wage <= 400.00) {
        percentage = 15;
    } else if (wage >= 400.01 && wage <= 800.00) {
        percentage = 12;
    } else if (wage >= 800.01 && wage <= 1200.00) {
        percentage = 10;
    } else if (wage >= 1200.01 && wage <= 2000.00) {
        percentage = 7;
    } else {
        percentage = 4;
    }

    float raise = wage * percentage / 100;

    float new_wage = raise + wage;

    cout << "Novo salario: " << new_wage << "\n";
    cout << "Reajuste ganho: " << raise << "\n";
    cout << "Em percentual: " << percentage << " %\n";

    return 0;
}