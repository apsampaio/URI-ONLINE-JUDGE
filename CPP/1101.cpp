#include <iostream>
#include <iterator>
#include <list>

using namespace std;

int main()
{

    list<int> inputs;

    for (;;) {
        int a, b;
        cin >> a >> b;

        if (a <= 0 || b <= 0)
            break;

        inputs.push_back(a);
        inputs.push_back(b);
    }

    list<int>::iterator input;

    for (input = inputs.begin(); input != inputs.end(); ++input) {
        int a, b, start, end;

        a = *input;
        ++input;
        b = *input;

        start = a > b ? b : a;
        end = a > b ? a : b;

        int count = 0;

        for (int i = start; i <= end; i++) {
            cout << i << " ";
            count += i;
        }

        cout << "Sum=" << count << endl;
    }

    return 0;
}