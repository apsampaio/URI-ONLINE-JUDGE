#include <iostream>
#include <string>

using namespace std;

int main()
{

    std::cout.precision(1);
    cout << std::fixed;

    int line;
    float table[12][12];
    string action;

    cin >> line >> action;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> table[i][j];
        }
    }

    float result = 0;

    for (int i = 0; i < 12; i++)
        result += table[line][i];

    if (action == "M") {
        result = result / 12;
    }

    cout << result << endl;

    return 0;
}