#include <iomanip>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{

    double table[12][12];
    string action;

    cin >> action;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> table[i][j];
        }
    }

    double result = 0;
    int step = 1;
    int limit = 11;
    int count = 0;

    for (int y = 0; y < 5; y++) {
        for (int x = step; x < limit; x++) {
            result += table[y][x];
            count++;
        }
        step++;
        limit--;
    }

    if (action == "M") {
        result = result / count;
    }

    cout << fixed << setprecision(1) << result << endl;

    return 0;
}