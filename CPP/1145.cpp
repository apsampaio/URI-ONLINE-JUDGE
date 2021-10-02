#include <iostream>

using namespace std;

int main()
{

    int x, y;

    cin >> x >> y;

    int count = 0;

    for (int i = 1; i <= y; i++) {
        cout << i;

        if (count == x - 1) {
            count = 0;
            cout << endl;
        } else {
            cout << " ";
            count++;
        }
    }

    return 0;
}