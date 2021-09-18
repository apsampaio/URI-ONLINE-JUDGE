#include <algorithm>
#include <iostream>

using namespace std;

int main()
{

    int a, b, c;

    cin >> a >> b >> c;

    int list[3] = { a, b, c };

    sort(begin(list), end(list));

    for (int i = 0; i < 3; i++) {
        cout << list[i] << "\n";
    }

    cout << "\n";
    cout << a << "\n"
         << b << "\n"
         << c << "\n";

    return 0;
}