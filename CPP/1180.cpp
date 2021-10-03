#include <iostream>

using namespace std;

int main()
{

    int n;

    cin >> n;

    int value = 1000;
    int index = 0;

    for (int i = 0; i < n; i++) {
        int x;

        cin >> x;

        if (x < value) {
            value = x;
            index = i;
        }
    }

    cout << "Menor valor: " << value << endl;
    cout << "Posicao: " << index << endl;

    return 0;
}