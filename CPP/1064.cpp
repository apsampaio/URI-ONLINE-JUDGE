#include <iostream>

using namespace std;

int main()
{

    cout.precision(1);
    cout << fixed;

    float a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    float list[6] = { a, b, c, d, e, f };

    int count = 0;
    float average = 0;

    for (int i = 0; i < 6; i++) {
        if (list[i] >= 0) {
            count++;
            average += list[i];
        }
    }

    average = average / count;

    cout << count << " valores positivos" << endl;
    cout << average << endl;

    return 0;
}