#include <iostream>
#include <string>

using namespace std;

int main()
{

    std::cout.precision(1);
    cout << std::fixed;

    float table[12][12];
    string action;

    cin >> action;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> table[i][j];
        }
    }

    float result = 0;
    int limit = 0;
    int count = 0;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < limit; j++) {
            result += table[i][j];
            count++;
        }
        limit++;
    }

    if (action == "M") {
        result = result / count;
    }

    cout << result << endl;

    return 0;
}