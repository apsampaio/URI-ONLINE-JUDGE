#include <iostream>

using namespace std;

int main()
{
    int list[5] = {};
    cin
        >> list[0]
        >> list[1]
        >> list[2]
        >> list[3]
        >> list[4];

    int count = 0;

    for (int i = 0; i < 5; i++) {
        int value = list[i];

        if (value < 0)
            value *= -1;

        if (!(value % 2))
            count++;
    }

    cout << count << " valores pares" << endl;

    return 0;
}