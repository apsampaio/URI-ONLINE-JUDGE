#include <iostream>

using namespace std;

int main()
{

    int x, y;

    cin >> x >> y;

    int a = x > y ? y : x;
    int b = x > y ? x : y;

    for (int i = ++a; i < b; i++) {
        int value = i % 5;

        if (value == 2 || value == 3) {
            cout << i << endl;
        }
    }

    return 0;
}