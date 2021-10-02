#include <iostream>

using namespace std;

int main()
{

    int x, prev, old;

    cin >> x;

    int count = 0;
    prev = 1;

    for (int i = 0; count < x; count++) {
        cout << i;
        old = i;
        i = i + prev;
        prev = old;

        (count + 1) != x
            ? cout << " "
            : cout << endl;
    }

    return 0;
}