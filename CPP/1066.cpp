#include <iostream>

using namespace std;

int main()
{

    int inputs[5] = {};

    cin
        >> inputs[0]
        >> inputs[1]
        >> inputs[2]
        >> inputs[3]
        >> inputs[4];

    int even = 0, odd = 0, positive = 0, negative = 0;

    for (int i = 0; i < 5; i++) {
        int value = inputs[i];

        if (value < 0) {
            negative++;
            value *= 1;
        } else {
            if (value != 0)
                positive++;
        }

        if (value % 2) {
            odd++;
        } else {
            even++;
        }
    }

    cout << even << " valor(es) par(es)" << endl;
    cout << odd << " valor(es) impar(es)" << endl;
    cout << positive << " valor(es) positivo(s)" << endl;
    cout << negative << " valor(es) negativo(s)" << endl;

    return 0;
}