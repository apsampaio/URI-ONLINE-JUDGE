#include <iostream>

using namespace std;

int main()
{

    cout.precision(2);
    cout << std::fixed;

    float wage;
    int percentage;

    cin >> wage;

    if (wage >= 0 && wage <= 2000.00) {
        percentage = 0;
    } else if (wage >= 2000.01 && wage <= 3000.00) {
        percentage = 8;
    } else if (wage >= 3000.01 && wage <= 4500.00) {
        percentage = 18;
    } else if (wage > 4500.00) {
        percentage = 28;
    }

    // TODO

    return 0;
}