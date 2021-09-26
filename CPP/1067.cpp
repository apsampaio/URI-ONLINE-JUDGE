#include <iostream>

using namespace std;

int main()
{

    int input;

    cin >> input;

    for (int i = 0; i <= input; i++) {
        if (i % 2)
            cout << i << endl;
    }

    return 0;
}