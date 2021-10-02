#include <iostream>
#include <iterator>
#include <list>

using namespace std;

int main()
{

    list<int> inputs;

    for (;;) {
        int input;

        cin >> input;

        if (input == 0)
            break;

        inputs.push_back(input);
    }

    list<int>::iterator input;

    for (input = inputs.begin(); input != inputs.end(); ++input) {
        for (int i = 1; i < *input; i++) {
            cout << i << " ";
        }
        cout << *input;
        cout << endl;
    }

    return 0;
}