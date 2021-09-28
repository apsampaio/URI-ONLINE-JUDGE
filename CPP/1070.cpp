#include <iostream>

using namespace std;

int main()
{

    int input;

    cin >> input;

    for (int i = 0; i < 6; input++) {
        if (input % 2) {
            cout << input << endl;
            i++;
        }
    }

    return 0;
}