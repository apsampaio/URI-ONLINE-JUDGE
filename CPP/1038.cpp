#include <iostream>

using namespace std;

int main()
{

    float items[5] = { 4.00, 4.50, 5.00, 2.00, 1.50 };
    int code, quantity;

    cin >> code >> quantity;

    float value = quantity * items[code - 1];

    cout.precision(2);
    cout << fixed << "Total: R$ " << value << "\n";

    return 0;
}