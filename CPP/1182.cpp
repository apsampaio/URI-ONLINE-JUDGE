#include <iostream>
#include <string>

using namespace std;

int main()
{

    std::cout.precision(1);
    cout << std::fixed;

    float table[12][12];
    int line;
    string action;

    cin >> line >> action;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> table[i][j];
        }
    }

    float result = 0;

    for (int i = 0; i < 12; i++) {
        result += table[i][line];
    }

    if (action == "M") {
        result = result / 12;
    }

    cout << result << endl;

    return 0;
}