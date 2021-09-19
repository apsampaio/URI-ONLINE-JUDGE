#include <iostream>

using namespace std;

int main()
{

    int start, end;

    cin >> start >> end;

    if (start == end) {
        cout << "O JOGO DUROU 24 HORA(S)\n";
    } else {
        int result = (start > end)
            ? (24 - start) + end
            : end - start;
        cout << "O JOGO DUROU " << result << " HORA(S)\n";
    }

    return 0;
}