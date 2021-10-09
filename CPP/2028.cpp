#include <iostream>
#include <iterator>
#include <list>

using namespace std;

int main()
{

    list<int> inputs;
    int input;

    while (cin >> input) {
        inputs.push_back(input);
    }

    list<int>::iterator it;

    int caseCounter = 1;

    for (it = inputs.begin(); it != inputs.end(); ++it) {
        int total = 1;
        for (int i = *it; i > 0; i--) {
            total += i;
        }

        cout
            << "Caso "
            << caseCounter
            << ": "
            << total;

        (total == 1)
            ? cout << " numero" << endl
            : cout << " numeros" << endl;

        cout << 0;

        for (int i = 0; i <= *it; i++) {
            for (int j = 0; j < i; j++) {
                cout << " " << i;
            }
        }

        cout << endl
             << endl;

        caseCounter++;
    }

    return 0;
}